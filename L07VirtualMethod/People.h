#ifndef L03_Inheritance
#define L03_Inheritance

#include<iostream>

class People{

private:
    int age;
    int sex;
public:
    People();
    People(int age,int sex);
    int getAge();
    void setAge(int age);
    int getSex();
    void setSex(int sex);
    virtual void sayHello();
    virtual void thinking() = 0;
};

#endif // L03_Inheritance

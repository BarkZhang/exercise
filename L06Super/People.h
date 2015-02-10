#ifndef L05_SuperClass
#define L05_SuperClass

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
    void sayHello();

};

#endif // L03_Inheritance


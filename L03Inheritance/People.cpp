#include "People.h"
using namespace std;

People::People(){
    age = 18;
    sex = 0;
}

People::People(int age,int sex){
    this->age = age;
    this->sex = sex;
}

int People::getAge(){
    return this->age;
}
int People::getSex(){
    return this->sex;
}

void People::setAge(int age){
    this->age = age;
}
void People::setSex(int sex){
    this->sex = sex;
}

void People::sayHello(){
    cout << "hello cpp" << endl;
}

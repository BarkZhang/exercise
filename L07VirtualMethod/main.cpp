#include <iostream>
#include "man.h"
int main()
{
    //Man m(21);
    //m.sayHello();

    People *p = new Man(21);
    p->sayHello();
    p->thinking();

    //you can't declare abstract type people
    //People *p = new People();

    return 0;
}

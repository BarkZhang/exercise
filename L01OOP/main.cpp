#include <iostream>
#include "People.h"

int main()
{
    People *p = new People();
    p->sayHello();
    delete p;
    return 0;
}

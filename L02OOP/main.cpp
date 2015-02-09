#include <iostream>
#include "People.h"

using namespace leasy;
int main()
{
    //使用namesace声明变量
    //或者用using指令
    People *p = new People();
    p->sayHello();
    delete p;

    return 0;
}

#include <iostream>
#include "People.h"

using namespace leasy;
int main()
{
    //ʹ��namesace��������
    //������usingָ��
    People *p = new People();
    p->sayHello();
    delete p;

    return 0;
}

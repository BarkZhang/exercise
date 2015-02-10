#include <iostream>
#include "Man.h"
using namespace std;

int main()
{
    Man *m = new Man(21);
    m->sayHello();
    m->People::sayHello();

    return 0;
}

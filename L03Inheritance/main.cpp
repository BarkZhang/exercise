#include <iostream>
#include "man.h"
using namespace std;

int main()
{
    Man *m = new Man();
    m->sayHello();
    delete m;
    return 0;
}

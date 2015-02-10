#include <iostream>
#include "Man.h"
using namespace std;

int main()
{
    Man *m = new Man(20);

    cout << "Age: " << m->getAge() << endl;

    return 0;
}

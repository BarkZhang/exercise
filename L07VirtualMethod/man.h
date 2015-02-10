#ifndef MAN_H
#define MAN_H

#include "People.h"

class Man:public People{
public:
    Man(int age);
    virtual void sayHello();
    virtual void thinking();
};

#endif // MAN_H

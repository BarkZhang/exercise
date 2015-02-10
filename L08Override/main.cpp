#include "People.h"

int main(){
	People *p = new People();
	p->sayHello();
	p->sayHello("Good Evening");
	delete p;

	return 0;
}
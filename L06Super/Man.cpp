#include "man.h"
using namespace std;

Man::Man(int age):People(age,1){

}

void Man::sayHello(){
    cout <<"Man Say:Hello CPP" << endl;
}

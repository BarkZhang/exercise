#include "man.h"
using namespace std;

Man::Man(int age):People(age,1){

}

void Man::sayHello(){
    cout << "Man Say: hello cpp" << endl;
}

void Man::thinking(){
    cout << "Man Thinking: who am i?" << endl;
}

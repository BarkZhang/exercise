#include <iostream>

using namespace std;

class Info{
public:
    Info(){
        cout << "Info Created" << endl;
    }
    ~Info(){
        cout << "Info Deleted" << endl;
    }
};

void runObject(){
    {
        Info info;
    }
    cout << "run info end" << endl;
}

int main()
{
//    Info *info = new Info();
//    delete info;
    runObject();
    return 0;
}

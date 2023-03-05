#include <iostream>
#include "a2.cpp"

using namespace std;
extern "C" void say_hello(){
    cout << "say hello1" << endl;
    cout << "say hello2" << endl;
    print2();
    cout << "say hello3" << endl;
}
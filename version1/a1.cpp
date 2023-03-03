#include <iostream>

#include "a.h"

using namespace std;
extern "C" void say_hello(){
    cout << "say hello" << endl;
}
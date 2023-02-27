/**
 * test.cpp
 */

#include <iostream>
#include "my_math.h"

using namespace std;

int main() {
    std::cout << "a" << std::endl;
    try
    {
        Add();
    }
    catch(const std::exception& e)
    {
       std::cout << "error11" << std::endl;
       
    }
    
   
    std::cout << "b" << std::endl;

    // cout << "minus: " << Minus(a, b) << endl;
    // cout << "multiply " << Multiply(a, b) << endl;
    // cout << "division: " << Division(a, b) << endl;
}

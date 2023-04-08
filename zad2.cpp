#include <iostream>
using namespace std;

int main()
{
    float a = 1e-20;
    float b = 1;
    
    cout<< b + a - b  << "\n" << b - b + a;
    return 0;
}

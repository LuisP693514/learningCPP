#include <iostream>

using namespace std;

int main()
{
    // Different forms of assigning a variable:

    int a1;
    int b1;

    int c1, d1;
    int e1; double f1; // Not good practice (bad)

    // Different forms of initialization:

    int a2; // default initialization
    int b2 = 5; // copy initialization
    int c2(5); // direct initialization

    // List initialization methods (preferred) (c++ 11)
    int d2{7}; // direct list initialization
    int e2 = {7}; // copy list initialization
    int f2{}; // value initialization

    // Use [[maybe_unused]] for variables that will probably not be used

    [[maybe_unused]] float g = 9.81f;

    return 0;
}

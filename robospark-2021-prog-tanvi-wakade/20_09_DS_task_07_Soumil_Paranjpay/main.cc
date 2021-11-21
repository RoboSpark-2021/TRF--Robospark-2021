#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    Box b1;
    Box b2(5, 5, 5);
    Box b3(5, 5, 5);

    cout << "b1 > b2: " << boolalpha << (b1 > b2) << endl;
    cout << "b1 < b2: " << boolalpha << (b1 < b2) << endl;
    cout << "b2 == b3: " << boolalpha << (b2 == b3) << endl;
}
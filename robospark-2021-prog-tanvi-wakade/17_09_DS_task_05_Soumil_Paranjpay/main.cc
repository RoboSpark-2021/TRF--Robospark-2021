#include <iostream>
#include "Rectangle.h"

int main()
{
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(5, 10);

    std::cout << "Rectangle 1: " << r1 << "Rectangle 2: " << r2 << "Rectangle 3: " << r3;
    std::cout << "Length of r1 = " << r1.getLength() << std::endl;
    std::cout << "Breadth of r2 = " << r2.getBreadth() << std::endl;

    std::cout << "Setting length of r3 to 15" << std::endl;
    r3.setLength(15);
    std::cout << "Rectangle 3: " << r3;
}

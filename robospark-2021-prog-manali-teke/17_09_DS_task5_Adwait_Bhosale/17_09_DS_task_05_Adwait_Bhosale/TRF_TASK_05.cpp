#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Rectangle
{

    int length, breadth;

public:
    //    Constructor with parameters
    void set_len(int num1)
    {
        length = num1;
    }

    void set_bre(int num2)
    {
        breadth = num2;
    }

    int get_len()
    {
        return length;
    }

    int get_bre()
    {
        return breadth;
    }

    Rectangle(int length, int breadth)
    {
        int area = length * breadth;
        cout << "Area of the rectangle is " << area << endl;
    }

    // Constructor with length and breadth parameters =0

    Rectangle()
    {
        int length = 0;
        int breadth = 0;
        int area2;
        area2 = length * breadth;
        cout << "Area of the rectangle is " << area2 << endl;
    }

    Rectangle(int common)
    {
        int area3;
        length = common;
        area3 = common * common;
        cout << "Area of the rectangle is " << area3 << endl;
    }
};

int main()
{

    int num1, num2;
    // int num3;
    // Rectangle num3(12);
    int x;
    int a;
    while (x != 0)
    {
        cout << "1. Area using two parameters " << endl
             << "2. Area with both length and breadth 0 " << endl
             << "3. Area with both length and breadth same " << endl;
        cin >> x;

        switch (x)
        {
        case 1:
            cout << "Enter the first number " << endl;
            cin >> num1;

            cout << "Enter the second number " << endl;
            cin >> num2;

            Rectangle(num1, num2);
            break;

        case 2:

            Rectangle();
            break;

        case 3:
            cout << "Enter the number" << endl;
            cin >> a;
            // Rectangle(12)
            Rectangle num3(a);

            break;
        }
    }

    return 0;
}
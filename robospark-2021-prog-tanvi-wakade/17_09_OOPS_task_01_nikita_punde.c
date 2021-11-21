#include <iostream.h>
 #include<conio.h>
 class Rectangle
 {
                int x, y;
    public:
                void set_values (int,int);
             int area (void)
        {
             return (x*y);
        }
 };
           void Rectangle::set_values (int a, int b)
        {
                x=a;
                y= b;
        }
             void main ()
 {
    clrscr();
    Rectangle rect;
    rect.set_values (3,4);
    cout << "Area is : " << rect.area();
    getch();
 }

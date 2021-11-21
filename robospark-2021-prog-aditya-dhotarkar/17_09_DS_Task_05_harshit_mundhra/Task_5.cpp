#include<iostream>
using namespace std;

class Rectangle
 {
    public:
        int length;
        int breadth;
        int getArea();
        void set1(){
            length=0;
            breadth=0;
        }
        void set2(int n){
            length=n;
            breadth=n;
        }
        void set3(int l,int b){
            length =l;
            breadth=b;
        }
        Rectangle()
        {
        length=0;
        breadth=0;
        }
        Rectangle(int n)
        {
        length=n;
        breadth=n;
        }
        Rectangle(int l,int b)
        {
        length=l;
        breadth=b;
        }
 };

int Rectangle::getArea(){
    return length*breadth;
}

int main()
{
    Rectangle r1;
    r1.set1();
    int l;
	cout<<"Area of Rectangle is "<<r1.getArea()<<endl;
    cout<<"Enter one dimension to be set as length and breadth: ";
    cin>>l;
    Rectangle r2(l);
    r2.set2(l);
    int n,m;
	cout<<"Area: "<<r2.getArea()<<endl;
    cout<<"Enter the length: ";
    cin>>m;
    cout<<"Enter the breadth: ";
    cin>>n;
    Rectangle r3(m,n);
    r3.set3(m,n);
	cout<< "Area: "<<r3.getArea()<<endl;
	return 0;
}

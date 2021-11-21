#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
    float length,breadth;
    Rectangle(){
    length=0;
    breadth=0;}
    Rectangle(int a, int b){
        this->length=a;
        this->breadth=b;
    }
    Rectangle(int a){
        this->length=a;
        this->breadth=a;
    }
    void printarea(){
        cout<<"Area : "<<length*breadth<<endl;
    }
};

int main(){
    Rectangle c1;
    c1.printarea();
    Rectangle c2(3,4);
    c2.printarea();
    Rectangle c3(5);
    c3.printarea();
    return 0;
}

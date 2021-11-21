#include <iostream>
using namespace std;

class Rectangle{
public:
       float length,breadth;
       //Setter
       void setLength(int length) {
       this->length = length;
       }
       // Getter
       int getLength() {
       return length;
       }
       Rectangle(){
       this->length = 0;
       this->breadth = 0;
       }
       Rectangle(float length,float breadth){
       this->length = length;
       this->breadth = breadth;
       }
       Rectangle(float length){
       this->length = length;
       this->breadth = length;
       }
       void Area(){
       cout << "Area: " << length*breadth<<endl;
       }
};

int main(){
 Rectangle r3;
 r3.setLength(20);
 float l = r3.getLength();
 Rectangle r = Rectangle(l,30);
 r.Area();
 Rectangle r1 = Rectangle(20);
 r1.Area();
 Rectangle r2 = Rectangle();
 r2.Area();
}

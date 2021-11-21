#include<bits/stdc++.h>
using namespace std;

class Rectangle
{

public:
int l;
int b;
void set_l_and_b(int l,int b){
    this->l=l;
    this->b=b;
}
int get_l(){
return l;
}
int get_b(){
return b;
}
Rectangle(){

}

Rectangle(int a){
l=a;
b=a;
}
Rectangle(int l,int b){
    this->l=l;
    this->b=b;
}

int calculate_area(){

    return l*b;
}

};

int main(int argc, char const *argv[])
{
     

    Rectangle rec;
    Rectangle rec1(5);
    Rectangle rec2(7,6);

    rec.set_l_and_b(5,8);

cout<<rec.calculate_area()<<endl;
cout<<rec1.calculate_area()<<endl;
cout<<rec2.calculate_area()<<endl;


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Box
{
    private:
    double length, breadth , height;
    public:

    Box(){

    }
    Box(double l, double b, double h){

    }
    public:
    void set_dim(double l, double b, double h){
        length = l;
        breadth = b;
        height = h;
    }
    double get_l(){
        return length;
    }
    double get_b(){
        return breadth;
    }
    double get_h(){
        return height;
    }
    double getVolume(){
        return length*breadth*height;
    }
    void print_dim(){
        cout<<length<<" "<<breadth<<" "<<height<<endl;
    }
};
bool operator >(Box obj1, Box obj2){
    if(obj1.getVolume()>obj2.getVolume()){
        return 1;
    }
    else{return 0;}
}
bool operator <(Box obj1, Box obj2){
    if(obj1.getVolume()<obj2.getVolume()){
        return 1;
    }
    else{return 0;}
}
bool operator <=(Box obj1, Box obj2){
    if(obj1.getVolume()<=obj2.getVolume()){
        return 1;
    }
    else{return 0;}
}
bool operator >=(Box obj1, Box obj2){
    if(obj1.getVolume()>=obj2.getVolume()){
        return 1;
    }
    else{return 0;}
}
bool operator ==(Box obj1, Box obj2){
    if(obj1.getVolume()==obj2.getVolume()){
        return 1;
    }
    else{return 0;}
}
int main()
{
    Box b1;
    Box b2;
    b1.set_dim(11,10,7);
    b2.set_dim(7,8,9);
    cout<<"Dimensions of Box 1 are"<<endl;
    b1.print_dim();
    cout<<"Dimensions of Box 2 are"<<endl;
    b2.print_dim();
    if(b1.getVolume()>b2.getVolume()){
        cout<<"Volume of Box 1 is greater than that of Box 2"<<endl;
    }
    else if(b1.getVolume()==b2.getVolume()){
        cout<<"Volume of Box 1 is equal to that of Box 2"<<endl;
    }
    else if(b1.getVolume()<b2.getVolume()){
        cout<<"Volume of Box 1 is less than that of Box 2"<<endl;
    }
    return 0;
}
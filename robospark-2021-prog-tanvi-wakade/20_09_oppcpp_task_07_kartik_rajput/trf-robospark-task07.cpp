#include <bits/stdc++.h>
using namespace std;

class Box
{
    int l,b,h;
    public:
    Box(){
    l=0;
    b=0;
    h=0;}
    Box(int a, int b, int c){
        this->l=a;
        this->b=b;
        this->h=c;
    }
    int getVolume(){
        return l*b*h;
    }
    int getL(){
        return l;
    }
    int getB(){
        return b;
    }
    int getH(){
        return h;
    }
    void setL(int a){
        this->l=a;
    }
    void setB(int a){
        this->b=a;
    }
    void setH(int a){
        this->h=a;
    }
    void printDimension(){
        cout<<"Dimensions :--"<<endl<<"Length : "<<l<<endl<<"Breadth : "<<b<<endl<<"Height : "<<h<<endl;
    }
    friend int operator>(Box b1, Box b2);
    friend int operator<(Box b1, Box b2);
    friend int operator>=(Box b1, Box b2);
    friend int operator<=(Box b1, Box b2);
    friend int operator==(Box b1, Box b2);
    
};

int operator>(Box a, Box b){
    if(a.getVolume()>b.getVolume())
        return 1;
    else
        return 0;
}

int operator<(Box a, Box b){
    if(a.getVolume()<b.getVolume())
        return 1;
    else
        return 0;
}

int operator>=(Box a, Box b){
    if(a.getVolume()>=b.getVolume())
        return 1;
    else
        return 0;
}

int operator<=(Box a, Box b){
    if(a.getVolume()<=b.getVolume())
        return 1;
    else
        return 0;
}

int operator==(Box a, Box b){
    if(a.getVolume()==b.getVolume())
        return 1;
    else
        return 0;
}

int main(){
    Box b1(1,2,3);
    cout<<"Volume : "<<b1.getVolume()<<endl;
    b1.setL(5);
    cout<<"Volume : "<<b1.getVolume()<<endl;
    b1.printDimension();
    Box b2(4,5,6);
    if (b1>b2)
    cout<<"\nb1>b2";
    if (b1<b2)
    cout<<"\nb1<b2";
    if (b1>=b2)
    cout<<"\nb1>=b2";
    if (b1<=b2)
    cout<<"\nb1<=b2";
    if (b1==b2)
    cout<<"\nb1==b2";
    else
    cout<<"\nb1!=b2";
}

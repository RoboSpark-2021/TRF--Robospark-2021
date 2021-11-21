#include<bits/stdc++.h>
using namespace std;

class Box{
    private :
        float length,breadth,height;

    public :
        // Default Constructor
        Box(){
            length=breadth=height=0;
        }
        // Parameterized constructor
        Box (float len,float bdh,float hgt){
            length=len;
            breadth=bdh;
            height=hgt;
        }

        void set_lbh(float len,float bdh,float hgt){
            length=len;
            breadth=bdh;
            height=hgt;
        }

        float get_l(){
            return length;
        }
        float get_b(){
            return breadth;
        }
        float get_h(){
            return height;
        }

        float get_volume(){
            return length*breadth*height;
        }

        void print_dimen(){
            cout<<"\nLength :"<<length;
            cout<<"\nBreadth :"<<breadth;
            cout<<"\nHeight :"<<height;
        }

    friend int operator >(Box b1,Box b2);
    friend int operator <(Box b1,Box b2);
    friend int operator <=(Box b1,Box b2);
    friend int operator >=(Box b1,Box b2);
    friend int operator ==(Box b1,Box b2);
};

int operator >(Box b1,Box b2){
    return b1.get_volume()>b2.get_volume() ; 
}

int operator <(Box b1,Box b2){
    return b1.get_volume()<b2.get_volume() ; 
}

int operator <=(Box b1,Box b2){
    return b1.get_volume()<=b2.get_volume() ; 
}

int operator >=(Box b1,Box b2){
    return b1.get_volume()>=b2.get_volume() ; 
}

int operator ==(Box b1,Box b2){
    return b1.get_volume()==b2.get_volume() ; 
}

void Result(int a){
    if(a==1){
        cout<<"The given condition is True";
    }else{
        cout<<"The given conditon is False";
    }
}

int main(int argc, char const *argv[])
{   
    int l1,b1,h1,l2,b2,h2;
    Box B1,B2;
    
    cout<<"Enter the details for box 1:-";
    cout<<"\nEnter length: ";
    cin>>l1;
    cout<<"Enter breadth: ";
    cin>>b1;
    cout<<"Enter height: ";
    cin>>h1;
    B1.set_lbh(l1,b1,h1);

    cout<<"Enter the details for box 2:-";
    cout<<"\nEnter length: ";
    cin>>l2;
    cout<<"Enter breadth: ";
    cin>>b2;
    cout<<"Enter height: ";
    cin>>h2;
    B2.set_lbh(l2,b2,h2);

    cout<<"\nB1 > B2 :";
    Result(B1>B2);
    cout<<"\nB1 < B2 :";
    Result(B1<B2);
    cout<<"\nB1 == B2 :";
    Result(B1==B2);
    cout<<"\nB1 <= B2 :";
    Result(B1<=B2);
    cout<<"\nB1 >= B2 :";
    Result(B1>=B2);
    
    return 0;
}

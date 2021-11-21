/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Rectangle{                                //declare class Rectangle
    int l,b;
    public:
    Rectangle(){                                //with default,Parametric(1 and 2 parameters)
        l=0;
        b=0;
    }
    Rectangle(int x, int y){
        l=x;
        b=y;
    }
    Rectangle(int x){
        l=x;
        b=x;
    }
    
    void area(){                                //func to calculate area
        cout<<"Area is :"<<l*b<<endl;
    }
};
void para2(){                                   //func to get dimensions for 2 parameters
    int x,y;
    cout<<"Enter 2 parameters\n";
    cin>>x;
    cin>>y;
    Rectangle obj1(x,y);
    obj1.area();
}
void para1(){                                   //func to get dimensions for 1 parameter
    int x;
    cout<<"Enter 1 parameter\n";
    cin>>x;
    Rectangle obj2(x);
    obj2.area();
}

int main()
{   
    int key;
    while(key!=0){                              //ask user to enter key and which constructor to use.
    cout<<"Choose constructor\n1.Default.\n2.Parametric with 2 parameters\n3.Parametric with 1 parameter1\n0.Exit"<<endl;
    cin>>key;
    Rectangle obj;

    
    
    switch(key){                                //call the required functions
        case 1:
        obj.area();
        break;
        
        case 2:
        para2();
        break;
        
        case 3:
        para1();
        break;
        
        case 0:
        exit(0);
        
    }
    }
    return 0;
}


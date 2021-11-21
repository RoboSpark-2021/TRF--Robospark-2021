#include <iostream>

using namespace std;

class box{
    int length, breadth, height;                        //declared class with attributes                            
    
    public:
    void get_dim(){                                     //func to get dimensions
        cout <<"Enter length"<<endl;
        cin >>length ;
        cout <<"Enter breadth"<<endl;
        cin >>breadth ;
        cout <<"Enter height"<<endl;
        cin >>height ;        
    }
    
    void show_dim(){                                    //func to print dimensions
        cout<<"Length is : "<<length<<endl;
        cout<<"Breadth is : "<<breadth<<endl;
        cout<<"Height is : "<<height<<"\n"<<endl;
    }
    
    int get_vol(){                                      //fuction to return volume
       return length*breadth*height;
    }
    int operator>(box obj){                             //function for box objects. will return 1(true) if vol(a)>vol(b) else 0(false)
        
        if(get_vol()>obj.get_vol()){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator>=(box obj){                            //function for box objects. will return 1(true) if vol(a)>=vol(b) else 0(false)
        
        if(get_vol()>=obj.get_vol()){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator<=(box obj){                            //function for box objects. will return 1(true) if vol(a)<=vol(b) else 0(false)
        
        if(get_vol()<obj.get_vol()){
            return 1;
        }
        else{
            return 0;
        }
    }
        int operator<(box obj){                         //function for box objects. will return 1(true) if vol(a)<vol(b) else 0(false)
        
        if(get_vol()<=obj.get_vol()){
            return 1;
        }
        else{
            return 0;
        }
    }
        int operator==(box obj){                        //function for box objects. will return 1(true) if vol(a)=vol(b) else 0(false)
        
        if(get_vol()==obj.get_vol()){
            return 1;
        }
        else{
            return 0;
        }
    }
        int operator!=(box obj){                        //function for box objects. will return 1(true) if vol(a)!=vol(b) else 0(false)
        
        if(get_vol()!=obj.get_vol()){
            return 1;
        }
        else{
            return 0;
        }
    }

};
int main()
{   int key=10;
    box one, two;                                       //made 2 obj and got their dimensions and displayed them
    cout<<"For box 1: "<<endl;                                  
    one.get_dim();
    cout<<"For box 2: "<<endl;
    two.get_dim();
    cout<<"For box 1: "<<endl;
    one.show_dim();
    cout<<"For box 2: "<<endl;
    two.show_dim();
    
    cout<<"Volume of box one: "<<one.get_vol()<<endl;  //displayed the volumes so that user wont forget
    cout<<"Volume of box two: "<<two.get_vol()<<endl;
    
    while(key!=0)                                      //using overloaded operators in switch by taking options from user till 0 is entered
    {
        cout<<"\n Choose an operator to compare the volumes of box one and two (Volume of box one _____Volume of box two)\noptions:\n 1. >\t2. <\n3. >=\t4. <=\n5. ==\t6. !=\n";
        cin>>key;
        switch(key)
        {
            case 1:                                                             
                if(one.get_vol()>two.get_vol())                                 //calling the operator in if() and printing appropriate messages
                {
                    cout<<"Volume of box one ie. "<<one.get_vol()<<" is greater"<<endl;
                }
                else if(one.get_vol()==two.get_vol())
                {
                    cout<<"Both volumes are equal! How can you use this operator?";
                }
                else
                {
                    cout<<"Volume of box two ie. "<<two.get_vol()<<" is greater"<<endl;
                }
                break;
            case 2:
                if(one.get_vol()<two.get_vol())
                {
                    cout<<"Volume of box one ie. "<<one.get_vol()<<" is smaller"<<endl;
                }
                else if(one.get_vol()==two.get_vol())
                {
                    cout<<"Both volumes are equal! How can you use this operator?";
                }
                else
                {
                    cout<<"Volume of box two ie. "<<two.get_vol()<<" is smaller"<<endl;
                }
                break;     
            case 3:
                if(one.get_vol()>=two.get_vol())
                {
                    cout<<"Volume of box one ie. "<<one.get_vol()<<" is greater or equal to Volume of box one ie. "<<two.get_vol() <<endl;
                }
                else
                {
                    cout<<"Volume of box one ie. "<<one.get_vol()<<" is smaller Volume of box one ie. "<<two.get_vol() <<endl;
                }
                break;
            case 4:
                if(one.get_vol()<=two.get_vol())
                {
                    cout<<"Volume of box one ie. "<<one.get_vol()<<" is less or equal to Volume of box one ie. "<<two.get_vol() <<endl;
                }
                else
                {
                    cout<<"Volume of box one ie. "<<two.get_vol()<<" is greater than Volume of box one ie. "<<one.get_vol() <<endl;
                }
                break;
            case 5:
                if(one.get_vol()==two.get_vol())
                {
                    cout<<"Both volumes are equal!";
                }
                else
                {
                    cout<<"Volumes are not equal!";
                }
                break;
            case 6:
                if(one.get_vol()!=two.get_vol())
                {
                    cout<<"Volumes are unequal!";
                }
                else
                {
                    cout<<"Volumes are equal!";
                }
                break;
            case 0:                                                             //Exit program only when input is 0
                exit(0);
            default:
                cout<<"Invalid option";
        }
    }    

    
        
    return 0;
    
}


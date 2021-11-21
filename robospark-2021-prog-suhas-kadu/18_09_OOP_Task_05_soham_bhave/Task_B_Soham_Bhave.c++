#include<iostream>
using namespace std;

class Rectangle
{
    //declaring the class
    private:
        int Length,Breadth,A;
    
    public:    
        //declaring the funcion
        void Assign(int L,int B)
        {
            Length = L;
            Breadth = B;
        }
    
        //declaring the constructors
        Rectangle() //default constructor
        {
            Length = 0;
            Breadth = 0;
        }

        Rectangle(int L,int B)//Parameterized constructor with 2 arguments
        {
            Length = L;
            Breadth = B;
        }

        Rectangle(int Num) //Parameterized constructor with 2 arguments
        {
            Length = Num;
            Breadth = Num;
        }

        void Area()
        {
            cout << " Area of Rectangle is = " << Length * Breadth <<endl; 
        }

        //use of the getter and setter
        void setArea(int L,int B)
        {
            Length = L;
            Breadth = B;
            A = Length * Breadth;
        }

        int getArea()
        {
            return A;
        }

};

int main(void)
{
    char ch;
    do
    {
    int option;

    cout << "----------------- choose the method do you want ? ---------------------"<< endl << endl << endl;
    cout << " 1) Enter 1 Normal Assigning and finding the area " <<endl;
    cout << " 2) Enter 2 Using the default constructor and finding the area " <<endl;
    cout << " 3) Enter 3 Using the Parametrized constructor with 2 Arguments and finding the area " <<endl;
    cout << " 4) Enter 4 Using the Parametrized constructor with 1 Arguments and finding the area " <<endl;
    cout << " 5) Enter 5 Using the Getter and Setter method to find the area " <<endl;

    cin >> option;

    
    
        switch(option)
        {
            case 1:
                    {
                        int L,B;
                        cout << "Enter the Length and breadth" << endl;
                        cin >> L >> B;
                        
                        //Declaring the object
                        Rectangle R;
                        //Accessing the memeber function
                        R.Assign(L,B);
                        R.Area();
                    }
                    break;
            case 2:
                    {
                        Rectangle R;//Calling the constructor
                        cout << "Area is = " <<endl;
                        R.Area();

                    }
                    break;
            case 3:
                    {
                        int L,B;
                        cout << "Enter the Length and breadth" << endl;
                        cin >> L >> B;
                        Rectangle R(L,B);//Calling the constructor

                        //Accessing the memeber function
                        R.Area();
                    }
                    break;
            case 4:
                    {
                        int Num;
                        cout << "Enter the Number" << endl;
                        cin >> Num;
                        Rectangle R(Num);//Calling the constructor

                        //Accessing the memeber function
                        R.Area();    
                    }
                    break;
            case 5: 
                    {
                        int L,B;
                        cout << "Enter the Length and breadth" << endl;
                        cin >> L >> B;
                        Rectangle R;//Creating the object

                        R.setArea(L,B); //setting the area

                        // getting the area
                        cout << " Area of the rectangle is = " << R.getArea() << endl;
                    }
            default:
                    {
                        cout << "Entered the wrong option" << endl;
                    }
                    break;
        }
        cout << "Do you want continue ? (Y/N)" << "\t" <<endl;
        cin >> ch;
    } while (ch == 'Y');
    
return 1;
}

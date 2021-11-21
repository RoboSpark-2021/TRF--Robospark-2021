#include<iostream>
using namespace std;

class rectangle
{
	private:
		float length,breadth;
	public:
		rectangle()
		{
			length=breadth=0;
		}
		rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		rectangle(int a)
		{
			length=breadth=a;
		}
		void getvalues()
		{
			cout<<"\nEnter value for length : ";
			cin>>length;
			cout<<"\nEnter value for breadth : ";
			cin>>breadth;
		}
		float area()
		{
			return length*breadth;
		}
	
};

int main()
{	
	rectangle Obj1;
	rectangle Obj2(3,7);
	rectangle Obj3(9);
	cout<<"\nArea of rectangle is "<<Obj1.area();
	cout<<"\nArea of rectangle is "<<Obj2.area();
	cout<<"\nArea of rectangle is "<<Obj3.area();
	
	rectangle Obj;
	Obj.getvalues();
	cout<<"\nArea of rectangle is "<<Obj.area();
	
	
	return 0;
}

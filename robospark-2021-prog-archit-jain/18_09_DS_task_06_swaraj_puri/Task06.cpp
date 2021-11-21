/*
I want my Personal data, Professional data, & Academic data to be separated in different classes and 4th class called biodata.
If I create object of biodata class then using that object I can get all my professional, personal and academic data.
Take data members in classes as follows:
personal class - Name, Surname, address, mobile_no, dob.
professional class - name_of_organization, job_profile, project.
Academic - year_of_passing, cgpa, college_name, branch
member functions
All class includes default constructor(if data members are present), and one function to get data from user for its data member.
Note :- define all data members as protected so that you can access this members in its derived class directly
*/
#include <string>
#include<iostream>
using namespace std;

class Personal_data{
protected:
string name, surname, address, mobile_no, dob;

public:
string Personal_data_setter()
{
 cout << "\n Enter Name:";
    cin >> name;
    cout << "\n Enter Surname:";
    cin >> surname;
    cout << "\n address:";
    cin >> address;
    cout << "\n Enter Mobile number:";
    cin >> mobile_no;
    cout << "\n Enter Date of Birth :";
    cin >> dob;
}
Personal_data()
{ cout <<"\n Personal data constructor executed !!!";
    Personal_data_setter();


}
};


class professional_data{
protected:
    string name_of_organization, job_profile, project;
public:

 string professional_data_setter()
 {
  cout << "\nEnter Name of Organization:";
    cin >> name_of_organization;
    cout << "\nEnter Job Profile:";
    cin >>job_profile;
    cout << "\nEnter Project:";
    cin >>project;
 }

professional_data( )
{
    cout <<"\n Professional data constructor executed !!!";
    professional_data_setter();

}
};



class academic_data{
protected:
    string year_of_passing, cgpa, college_name, branch;

string academic_data_setter()
{
 cout << "\n Enter Year of Passing:";
cin >> year_of_passing;
 cout << "\n Enter CGPA:";
cin >>cgpa;
 cout << "\n Enter College_Name:";
cin >>college_name;
 cout << "\n Enter Branch:";
cin >> branch;
}

public:
academic_data(){
cout <<"\n Academic data constructor executed !!!";
academic_data_setter();

}
};



class Biodata: public Personal_data,public professional_data,public academic_data{
public:

Biodata(){
 cout <<"\n----Biodata Constructor executed----\n";

 cout <<"\n\t!!!!---- Personal Details ----!!!!\n";
 cout <<"Name:"<<name+"\n"+"Surname: "+surname+"\nAddress: "+address+"\nMobile Number: "+mobile_no+"\nDate of Birth: "+dob+"\n";
 cout <<"\n\t!!!!---- Professional Details ----!!!!\n";
 cout <<"\nName of Organization: "+name_of_organization+"\nJob Profile: "+job_profile+"\nProject: "+project;
 cout <<"\n\t!!!!---- Academic Details ----!!!!\n";
 cout <<"Year of Passing: "+year_of_passing+"\nCGPA: "+cgpa+"\nCollege Name"+college_name+"\nBranch"+branch;
}


};



int main()
{

Biodata obj;
}



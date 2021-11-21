//here we want to code for a problem the problem statement is :
/*Task 06- 18/09/2021
I want my Personal data, Professional data, & Academic data to be separated in different classes and 4th class called biodata.
If I create object of biodata class then using that object I can get all my professional, personal and academic data.Take data members in classes as follows:
personal class - Name, Surname, address, mobile_no, dob.
professional class - name_of_organization, job_profile, project.
Academic - year_of_passing, cgpa, college_name, branchmember functions
All class includes default constructor(if data members are present), and one function to get data from user for its data member.Note :- define all data members as protected so that you can access this members in its derived class directly
*/

////Notic :enter the details but keep in mind you should use space
////you can use underscore instead of it.
#include<iostream>
using namespace std;

class prsnl_data
{
protected :
    string Name , Surname, address;
    int mobilenum;
    string dob; //dob formate should be  date_month_year;
    void set_prnsl()
    {
        string Num , Surnum, adres;
        cout<<"\nEnter the name : ";
        cin>>Num;
        cout<<"\nEnter the surname : ";
        cin>>address;
        cout<<"\nEnter the address : ";
        cin>>adres;
        Name = Num;
        Surname = Surnum;
        address = adres;
    }
    void getprsnl()
    {
                cout<<"\nName : " <<Name<< "\n Surnum  : "<< Surname<<"\nAddress : "<< address<<endl;
    }
};

class profess_data
{
protected :
    string org_name;
    string job_profile;
    string project_name;
//public :

    void set_prof()
    {
        string orgnum, jobprof , projnum;
        cout<<"\nEnter the organization name : ";
        cin>>orgnum;
        cout<<"\n Enter the job profile ";
        cin>>jobprof;
        cout<<"\n Enter the project Name";
        cin>>projnum;
        org_name = orgnum;
        job_profile = jobprof;
        project_name = projnum;

    }
    void getprof()
    {
        cout<<"\n org Name  :"<<org_name<< "\n job profile : "<< job_profile << "\n project Name : "<< project_name<<endl;
    }
};
class academic
{
protected :
    int year_of_passing;
    float cgpa;
    string clg_name;
    string branch;
//public :
    void set_aca()
    {
        int year ;
        float cgp;
        string clg;
        string brnch;
        cout<<"\n Enter year of passsing : ";
        cin>>year;
        cout<<"Enter The cgpa : ";
        cin>>cgp;
        cout<<"Enter the clg Name  : ";
        cin>>clg;
        cout<<"Enter the branch Name : ";
        cin>>brnch;
        year_of_passing = year;
        cgpa = cgp;
        clg_name = clg;
        branch = brnch;
    }
    void getaca()
    {
                cout<<"\n year of passing  : "<<year_of_passing<<"\n cgpa :"<<cgpa<<"\n college Name : "<< clg_name<<"\n branch Name : "<<branch<<endl;
    }
};
class biodata : public prsnl_data, public profess_data, public academic
{
public:

    biodata()
    {
        set_aca();
        set_prnsl();
        set_prof();
        getprsnl();
        getaca();
        getprof();
    }
};

int main()
{
    cout<<"Here is my biodata \n";
    biodata s1;



}

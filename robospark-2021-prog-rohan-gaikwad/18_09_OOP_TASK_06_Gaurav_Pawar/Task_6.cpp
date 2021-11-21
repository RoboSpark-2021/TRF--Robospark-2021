// I want my Personal data, Professional data, & Academic data to be separated in different classes and 4th class called biodata.
// If I create object of biodata class then using that object I can get all my professional, personal and academic data.
// Take data members in classes as follows:
// personal class - Name, Surname, address, mobile_no, dob.
// professional class - name_of_organization, job_profile, project.
// Academic - year_of_passing, cgpa, college_name, branch
// member functions
// All class includes default constructor(if data members are present), and one function to get data from user for its data member.
// Note :- define all data members as protected so that you can access this members in its derived class directly

#include<iostream>
using namespace std;

class Personal
{
protected:
    string Name, Surname, address;
    long mobile_no;
    string dob;

    void getPersonalData()
    {
        cout<<"\nEnter Name:";
        cin >> Name;

        cout<<"\nEnter Surname:";
        cin >> Surname;

        cout<<"\nEnter address:";
        cin >> address;

        cout<<"\nEnter Mobile Number:";
        cin >> mobile_no;

        cout<<"\nEnter DOB:";
        cin >> dob;

    }

    void showPersonalData()
    {
        cout<<"\nName: " << Name << endl;

        cout<<"\nSurname: " << Surname << endl;

        cout<<"\nAddress: " << address<< endl;

        cout<<"\nMobile Number: " << mobile_no<< endl;

        cout<<"\nDOB: " << dob<< endl;

    }
};

class Professional
{
protected:
    string name_of_organization, job_profile, project;
    void getProfessinalData()
    {
        cout<<"\nEnter Name of the organization:";
        cin >> name_of_organization;

        cout<<"\nEnter Job Profile:";
        cin >> job_profile;

        cout<<"\nEnter Project:";
        cin >> project;
    }

    void showProfessinalData()
    {
        cout<<"\nName of the organization: " << name_of_organization << endl;

        cout<<"\nJob Profile: " << job_profile<< endl;

        cout<<"\nProject:" << project<< endl;
    }
};

class Academic
{
    protected:
    int year_of_passing;
    float cgpa;
    string college_name, branch;

    void getAcademicData()
    {
        cout<<"\nEnter Year of passing:";
        cin >> year_of_passing;

        cout<<"\nEnter CGPA:";
        cin >> cgpa;

        cout<<"\nEnter the college name:";
        cin >> college_name;

        cout<<"\nEnter Branch:";
        cin >> branch;
    }

    void showAcademicData()
    {
        cout<<"\nYear of passing: " << year_of_passing<< endl;

        cout<<"\nCGPA: " << cgpa<< endl;

        cout<<"\nthe college name: " << college_name<< endl;

        cout<<"\nBranch: " << branch<< endl;
    }
};

class Biodata : protected Personal,Professional,Academic
{
public:
    void getBioData()
    {
        printf("\nEnter Biodata\n");
        getPersonalData();
        getProfessinalData();
        getAcademicData();
    }

    void showBioData()
    {
        printf("\n\nBiodata\n");
        showPersonalData();
        showProfessinalData();
        showAcademicData();
    }
};

int main()
{
    Biodata b;
    b.getBioData();
    b.showBioData();
    return 0;
}
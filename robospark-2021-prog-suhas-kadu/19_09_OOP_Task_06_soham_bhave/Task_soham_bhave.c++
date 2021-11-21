#include <iostream>
using namespace std;

class Biodata
{
  public:
    int mobile_no,year_of_passing;
    double cgpa;
    string Name, Surname, address,name_of_organization, job_profile, project, college_name, branch, dob;

    void setdata_mobile_no(int n)
    {
      mobile_no = n;
    }

    int getdata_mobile_no()
    {
      return mobile_no;
    }

    void setdata_dob(string d)
    {
      dob = d;
    }

    string getdata_dob()
    {
      return dob;
    }

    void setdata_year_of_passing(int y)
    {
      year_of_passing = y;
    }

    int getdata_year_of_passing()
    {
      return year_of_passing;
    }

    void setdata_cgpa(double c)
    {
      cgpa = c;
    }

    double getdata_cgpa()
    {
      return cgpa;
    }

    void setdata_Name(string N)
    {
      Name = N;
    }

    string getdata_Name()
    {
      return Name;
    }

    void setdata_Surname(string s)
    {
      Surname = s;
    }

    string getdata_Surname()
    {
      return Surname;
    }

    void setdata_address(string a)
    {
      address = a;
    }

    string getdata_address()
    {
      return address;
    }

    void setdata_name_of_organization(string no)
    {
      name_of_organization = no;
    }

    string getdata_name_of_organization()
    {
      return name_of_organization;
    }

    void setdata_job_profile(string j)
    {
      job_profile = j;
    }

    string getdata_job_profile()
    {
      return job_profile;
    }

    void setdata_project(string p)
    {
      project = p;
    }

    string getdata_project()
    {
      return project;
    }

    void setdata_college_name(string cn)
    {
      college_name = cn;
    }

    string getdata_college_name()
    {
      return college_name;
    }

    void setdata_branch(string bn)
    {
      branch = bn;
    }

    string getdata_branch()
    {
      return branch;
    }

};

class personal : protected Biodata
{
  public:
    string Name, Surname, address, dob;
    int mobile_no;

    void setPersonal_Name_Address(string N,string s,string a)
    {
      Name = N;
      Surname = s;
      address = a;
    }

    void getPersonal_Name_Address()
    {
      cout << "Name is " << Name << " " << Surname << endl << "address is " << address << endl; 
    }

    void setPersonal_mobile_dob(int n,string d)
    {
      mobile_no = n;
      dob = d;
    }

    void getPersonal_mobile_dob()
    {
      cout << "Mobile no is " << mobile_no << endl << "Date of Birth is " << dob << endl;
    }

};

class professional : protected Biodata
{
  public:
    string name_of_organization, job_profile, project;

    void setProfessinal_job_info(string no,string j,string p)
    {
      name_of_organization = no;
      job_profile = j;
      project = p;
    }

    void getProfessional_job_info()
    {
      cout << "name of organization is " << name_of_organization << endl << "job_profile is " << job_profile << endl << "Project is " << project << endl; 
    }

};


class Academic : protected Biodata
{
  public :
    int year_of_passing, cgpa; 
    string college_name, branch;

    void setAcademic_info(int y,double c)
    {
      year_of_passing = y;
      cgpa = c;
    }

    void getAcademic_info()
    {
      cout << "year of passing is " << year_of_passing << endl << "cgpa is " << cgpa << endl; 
    }

    void setcollege_info(string cn,string bn)
    {
      college_name = cn;
      branch = bn;
    }

    void getcollege_info()
    {
      cout << "college name is " << college_name << endl << "branch is " << branch << endl; 
    }
};


int main(void)
{
  char ch;
  do
  {
  cout << " ----------------------------------  Menu ----------------------" << endl;
  cout << "1) Enter 1 To get Personal Data" << endl;
  cout << "2) Enter 2 To get Professional Data" << endl;
  cout << "3) Enter 3 To get Academic Data" << endl;

  int option;

  cout << "Enter your option" << endl;
  cin >> option ;

    switch(option)
    {
      case 1 :
              {
                // creating the object
                personal p;
                
                // declaring the variables
                string Name, Surname, address, dob;
                int mobile_no;

                cout << "Enter your Name = ";
                cin >> Name >> Surname;

                cout << "Enter your address = ";
                cin >> address;

                cout << "Enter mobile number = ";
                cin >> mobile_no;

                cout << "Enter the date of the birth = ";
                cin >> dob;

                //accessing the functions
                p.setPersonal_Name_Address(Name,Surname,address);//using the setter

                p.getPersonal_Name_Address();//used getter

                p.setPersonal_mobile_dob(mobile_no,dob);//used setter

                //using getter
                p.getPersonal_mobile_dob();
              }break;
      case 2 :
              {
                // creating the object
                professional p;

                //declaring the variables
                string name_of_organization, job_profile, project;

                cout << "Enter your Name of organization = ";
                cin >> name_of_organization;

                cout << "Enter your job_profile = ";
                cin >> job_profile;

                cout <<"Enter your project = ";
                cin >> project;

                cout << endl;
                
                // accessing the member functions
                p.setProfessinal_job_info(name_of_organization,job_profile,project);

                p.getProfessional_job_info();
              }break;

      case 3 :
              {
                //creating the object
                Academic A;

                //declaring the variables
                int year_of_passing;
                double cgpa; 
                string college_name, branch;

                cout << "Enter your year of passing = ";
                cin >> year_of_passing;

                cout <<"Enter your cgpa = ";
                cin >> cgpa;

                cout << "Enter your college name = ";
                fflush(stdin);
                cin >> college_name;

                cout << "Enter your branch = ";
                cin >> branch;

                //accessing the member functions
                A.setAcademic_info(year_of_passing,cgpa);
                A.getAcademic_info();

                A.setcollege_info(college_name,branch);
                A.getcollege_info();
              }break;
      case 4 :
              {
                cout << endl <<"Enter wrong option" << endl;
              }break;
      default:break;
    }
  cout << "Do you want to continue ? -- (Y/N)" << endl;
  fflush(stdin);
  cin >> ch;   
  }while(ch=='Y');


return 0;
}
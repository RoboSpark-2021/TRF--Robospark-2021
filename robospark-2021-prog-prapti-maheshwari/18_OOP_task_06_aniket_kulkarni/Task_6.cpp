#include<iostream>
using namespace std;

class personal
{
	protected:
		string Name, Surname, address;
		int mobile_no, dob;
	public:
		personal()
		{
			Name="First Name";
			Surname="Last Name";
			address="Local Address";
		}
		void getpersonaldata()
		{
			cout<<"\nEnter your first name : ";
			cin>>Name;
			cout<<"\nEnter your last name : ";
			cin>>Surname;
			cout<<"\nEnter your address : ";
			cin>>address;
			cout<<"\nEnter your mobile no. : ";
			cin>>mobile_no;
			cout<<"\nEnter your date of birth : ";
			cin>>dob;
		}
		
};

class professional
{
	protected:
		string name_of_organization, job_profile, project;
	public:
		professional()
		{
			name_of_organization="VIT Pune";
			job_profile="Student"; 
			project="No Projects yet";
		}
		void getprofessionaldata()
		{
			cout<<"\nEnter your organization : ";
			cin>>name_of_organization;
			cout<<"\nEnter your job profile : ";
			cin>>job_profile;
			cout<<"\nEnter your project : ";
			cin>>project;
		}
};

class academic
{
	protected:
		string college_name, branch;
		int year_of_passing, cgpa;
	public:
		academic()
		{
			college_name="VIT Pune";
			branch="Comp";
			year_of_passing=2020;
			cgpa=7.7;
		}
		void getacademicdata()
		{
			cout<<"\nEnter your college name : ";
			cin>>college_name;
			cout<<"\nEnter your branch : ";
			cin>>branch;
			cout<<"\nEnter your year of passing : ";
			cin>>year_of_passing;
			cout<<"\nEnter your CGPA : ";
			cin>>cgpa;
		}
};

class biodata : public personal, public professional, public academic
{
	
};

int main()
{
//	int choice;
	biodata student;
	student.getpersonaldata();
	student.getprofessionaldata();
	student.getacademicdata();

	return 0;
}

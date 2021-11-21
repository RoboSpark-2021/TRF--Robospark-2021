#include<bits/stdc++.h>
using namespace std;

class Personal{
    protected :
        string name,surname,address,dob;
        int mobile_no;
    public:
        void set_name_surname(string name, string surname){
            this->name=name;
            this->surname=surname;
        }

        void set_add_dob(string address, string dob){
            this->address=address;
            this->dob=dob;
        }

        void set_mobile_no(int mobile_no){
            this->mobile_no=mobile_no;
        }

        void get_personal_details(){
            cout<<" Full Name:"<<name<<" "<<surname<<"\n";
            cout<<"Address:"<<address<<"\n";
            cout<<"Date of birth :"<<dob<<"\n";
            cout<<"Mobile no :"<<mobile_no<<"\n";
            // cout<<mobile_no;
        }
};


class Professional{
    protected:
        string name_of_organization,job_profile,project;
    public:
        void set_name_of_organization_job_profile_project(string name_of_org, string job, string project){
            this->name_of_organization=name_of_org;
            this->job_profile=job;
            this->project=project;
        }

        void get_professional_details(){
            cout<<"Name of organization:"<<name_of_organization<<"\n";
            cout<<"Job profile :"<<job_profile<<"\n";
            cout<<"Project :"<<project<<"\n";
        }
};

class Academic{
    protected :
        string college_name,branch;
        int year_of_passing;
        float cgpa;
    public:
        void set_college_branch(string college,string branch){
            college_name=college;
            this->branch=branch;
        }

        void set_yop_cg(int yop,float cg){
            year_of_passing=yop;
            cgpa=cg;
        }

        void get_academic_details(){
            cout<<"College name:"<<college_name;
            cout<<"\n Branch:"<<branch;
            cout<<"\n Year of passing :"<<year_of_passing;
            cout<<"\nCGPA:"<<cgpa;
        }
};

class BioData : public Personal, public Professional, public Academic{

};
int main(int argc, char const *argv[])
{
    BioData BD1;
    BD1.set_name_surname("Chaitanya","Landge");
    BD1.set_add_dob("Nagpur","12/11/2002");
    BD1.set_mobile_no(123456789);
    BD1.set_name_of_organization_job_profile_project("instagram","developer","project");
    BD1.set_college_branch("VIT","CE");
    BD1.set_yop_cg(2024,9.20);
    cout<<"The details are as follows\n";
    BD1.get_academic_details();
    BD1.get_personal_details();
    BD1.get_professional_details();

    return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;

class personal{
    public:
    string Name, Surname , address;
    long  mobile_no, dob;
    personal()
    {
    Name = "null", Surname = "null", address="null";
    mobile_no =0L, dob=0L;
    }
    personal(string n, string sn, string a, long m, long d){
        Name = n;
        Surname = sn;
        address = a;
        mobile_no = m;
        dob = d;
    }
    void print_personal_data()
    {
        cout<<"\nName : " << Name;
        cout<<"\nSurname : " << Surname;
        cout<<"\nAddress : " << address;
        cout<<"\nMobile Number : " << mobile_no;
        cout<<"\nDate of Birth : " << dob;
    }
};

class professional{
    public:
    string Name_of_ins, job_profile , project;    
    professional()
    {
    Name_of_ins = "null", 
    job_profile = "null", 
    project="null";    
    }
    professional(string n1, string jp1, string p1){
        Name_of_ins = n1;
        job_profile = jp1;
        project = p1;
    }
    void print_professional_data()
    {
        cout<<"\nName of organization : " << Name_of_ins;
        cout<<"\nJob Profile : " << job_profile;
        cout<<"\nProject : " << project;
    }
};
class academic{
    public:
    int graduating_year;
    float cgpa;
    string college_name ="null", branch="null";     
    academic()
    {
    graduating_year = 0, cgpa = 0;
    college_name ="null", branch ="null";        
    }
    academic(string cn1, string b1, int y1, float c2){
        college_name = cn1;
        branch = b1;
        graduating_year = y1;
        cgpa = c2;
    }
    void print_academic()
    {
        cout<<"\nName of Institute: " << college_name;
        cout<<"\nBranch : " << branch;
        cout<<"\nGraduating year: " << graduating_year;
        cout<<"\nCgpa : " << cgpa;
    }   
};
 
class biodata : public personal , public professional , public academic
{ public:
    biodata(){
    }

    void print_details()
    {
        personal r;
        personal pe1("Harshit", "Mundhra", "Kota", 94625645, 15092002);
        pe1.print_personal_data();
        professional r2;
        professional pro2 ("TRF", "Mentee", "OOPs");
        pro2.print_professional_data();
        academic ac1 ("Vit", "AI&DS", 2024, 9.25);
        ac1.print_academic();
    }
};
int main()
{
    biodata bio;
    bio.print_details();   
return 0;
}
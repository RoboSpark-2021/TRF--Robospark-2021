#include<bits/stdc++.h>
using namespace std;
class personal{

protected:
string Name;
string Surname;
string address;
int mob;
public:

void setname(string Name){
    this->Name=Name;
}
void setSurame(string Surname){
    this->Surname=Surname;
}
void setaddress(string address){
    this->address=address;
}
void setmob(int mob){
    this->mob=mob;
}
string getname(){
    return Name;
}
string getsurname(){
    return Surname;
}
string  getaddress(){
    return address;
}
int getmob(){
    return mob;
}
};
class Professional{

    protected:
    string name_of_organisation;
    string job_profile;
    string project;
    public: 
    void setnameof_organisation(string name_of_organisation){
     this->name_of_organisation=name_of_organisation;
    }
    void setjobprofile(string job_profile){
     this->job_profile=job_profile;
    }
    void setproject(string project){
     this->project=project;
    }
    string getnameoforganisation(){
        return name_of_organisation;
    }
    string getjobprofile(){
        return job_profile;
    }
    string getproject(){
        return project;
    }

};
class Acadmic{
protected:
int year_of_passing;
float cgpa;
string clg_name;
string branch;
public :
void setyearofpassing(int year_of_passing){
    this->year_of_passing;}

    void setcgpa(float cgpa){
        this->cgpa=cgpa;
    }
    void setclgname(string clg_name){
        this->clg_name=clg_name;
    }
    void setbranch(string branch){
        this->branch=branch;
    }
    float getcgpa(){
        return cgpa;
    }
    string getclgname(){
        return clg_name;
    }
    string getbranch(){
        return branch;
    }
    int getyearofpassing(){
        return year_of_passing;
    }
};

class biodata :public personal, public Professional,public Acadmic{
      

};
int main(int argc, char const *argv[])
{
   biodata obj1;
   
   obj1.setname("first_name");
   obj1.setSurame("surname");
   obj1.setaddress("bibiewadi,pune");
   obj1.setmob(1234567891);
   obj1.setnameof_organisation("XYZ_organisation");
   obj1.setjobprofile("webdevlopment skills");
   obj1.setproject("travelling website");
   obj1.setyearofpassing(2024);
   obj1.setbranch("cs");
   obj1.setcgpa(9.3);
   obj1.setclgname("VIT");
   


   cout<<obj1.getname()<<endl;
   cout<<obj1.getsurname()<<endl;
   cout<<obj1.getaddress()<<endl;
   cout<<obj1.getmob()<<endl;
   cout<<obj1.getnameoforganisation()<<endl;
   cout<<obj1.getjobprofile()<<endl;
   cout<<obj1.getproject()<<endl;
   cout<<obj1.getyearofpassing()<<endl;
   cout<<obj1.getbranch()<<endl;
   cout<<obj1.getcgpa()<<endl;
   cout<<obj1.getclgname()<<endl;
    return 0;
}

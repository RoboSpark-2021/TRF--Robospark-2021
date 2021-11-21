#include <bits/stdc++.h>
using namespace std;

class Personal_data
{
    protected:
    string name, surname, address, mobile_no, dob;
    Personal_data(){
        this->name="Kartik";
        this->surname="Rajput";
        this->address="Ringroad, Jalgaon";
        this->mobile_no="7727998598";
        this->dob="27-10-2002";
    }
    void setp1data(string n, string s, string a, string m, string d){
        this->name=n;
        this->surname=s;
        this->address=a;
        this->mobile_no=m;
        this->dob=d;
    }
};

class Proffesional_data
{
    protected:
    string org, profile, project;
    Proffesional_data(){
        this->org="VIT";
        this->profile="Student";
        this->project="Project 1";
    }
    void setp2data(string o, string p1, string p2){
        this->org=o;
        this->profile=p1;
        this->project=p2;
    }
};

class Academic_data
{
    protected:
    string college, branch;
    int passingyr, cgpa;
    Academic_data(){
        this->college="VIT";
        this->branch="AI&DS";
        this->passingyr=2024;
        this->cgpa=00;
    }
    void setadata(string c, string b, int p, int cg){
        this->college=c;
        this->branch=b;
        this->passingyr=p;
        this->cgpa=cg;
    }
};

class Biodata : protected Personal_data, protected Proffesional_data, protected Academic_data
{
    public:
    void print(){
    cout<<"Name : "<<name<<endl;
    cout<<"Surname : "<<surname<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"Mobile No. : "<<mobile_no<<endl;
    cout<<"Date of Birth : "<<dob<<endl;
    cout<<"Name of Organization : "<<org<<endl;
    cout<<"Job Profile : "<<profile<<endl;
    cout<<"Project : "<<project<<endl;
    cout<<"College Name : "<<college<<endl;
    cout<<"Branch : "<<branch<<endl;
    cout<<"Year of Passing : "<<passingyr<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
    return;
    }
    void perdata(string n, string s, string a, string m, string d){
        setp1data(n, s, a, m, d);
    }
    void prodata(string o, string p1, string p2){
        setp2data(o, p1, p2);
    }
    void accdata(string c, string b, int p, int cg){
        setadata(c, b, p, cg);
    }
};

int main(){
    string n,s,a,m,d,o,p1,p2,c,b;
    int p,cg;

    Biodata b1;
    cout<<"Before getting data from user : "<<endl;
    b1.print();

    cout<<endl<<"Enter data :---"<<endl<<"Enter Name : ";
    getline(cin, n);
    cout<<"Enter Surname : ";
    getline(cin, s);
    cout<<"Enter Address : ";
    getline(cin, a);
    cout<<"Enter Mobile No. : ";
    getline(cin, m);
    cout<<"Enter Date of Birth : ";
    getline(cin, d);
    b1.perdata(n,s,a,m,d);
    cout<<"Enter Organization : ";
    getline(cin, o);
    cout<<"Enter Job Profile : ";
    getline(cin, p1);
    cout<<"Enter Project : ";
    getline(cin, p2);
    b1.prodata(o,p1,p2);
    cout<<"Enter College Name : ";
    getline(cin, c);
    cout<<"Enter Branch : ";
    getline(cin, b);
    cout<<"Enter Year of Passing : ";
    cin>>p;
    cout<<"Enter CGPA : ";
    cin>>cg;
    b1.accdata(c,b,p,cg);
    cout<<endl<<"After getting data from user : "<<endl;
    b1.print();
}

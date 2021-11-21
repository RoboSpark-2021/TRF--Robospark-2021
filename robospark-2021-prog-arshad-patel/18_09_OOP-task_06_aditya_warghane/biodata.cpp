#include <iostream>
#define CURRENTYEAR 2021                                    //defined current date 20/9/21
#define CURRENTMONTH 9
#define CURRENTDATE 20
using namespace std;


class  personal_data{                                       //class for personal data
    protected:
    string name,surname,mob;
    int year,month,date;
    bool notValid=true;
    
    public:
    personal_data(){
        name="Aditya";
        surname="Warghane";
        year=2002;
        month=8;
        date=7;
        mob="7841098134";
    }
bool isYearValid(int year){                                 //func to check if year entered if valid (<=2021)
    return (year<=CURRENTYEAR && year>0);
}

bool isMonthValid(int month, int year){                     //func to check if month is valid or not(year==2021 month<10)
    if(month>12 || month<1) return false;
    if(year<CURRENTYEAR) return true;
    if(year==CURRENTYEAR && month<=CURRENTMONTH) return true;
    return false;
}

bool is31(int month){                                       //func to check if month has 31 days or not
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) return true;
    return false;
}

bool isLeap(int year){                                      //func to check if entered year is isLeap or not
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool isDateValid(int date, int month, int year){            //function to check if date is VALID or not
    if(year==CURRENTYEAR && month==CURRENTMONTH && is31(month) && date<=CURRENTDATE && date>0) return true;
    if(year==CURRENTYEAR && month==CURRENTMONTH && !is31(month) && date<=CURRENTDATE && date>0) return true;
    if(year==CURRENTYEAR && month<CURRENTMONTH && month!=2 && is31(month) && date<=31 && date>0) return true;
    if(year==CURRENTYEAR && month<CURRENTMONTH && month!=2 && !is31(month) && date<=30 && date>0) return true;
    if(year==CURRENTYEAR && month==2 &&  date<=28 && date>0) return true;
    if(year<CURRENTYEAR && month!=2 &&  is31(month) && date<=31 && date>0) return true;
    if(year<CURRENTYEAR && month!=2 &&  !is31(month) && date<=30 && date>0) return true;
    if(year<CURRENTYEAR && month==2 && isLeap(year) && date<=29 && date>0) return true;
    if(year<CURRENTYEAR && month==2 && !isLeap(year) && date<=28 && date>0) return true;
    return false;
}    

    void getper(){                                              //function to get personal data AND VALID BIRTH DATE
        cout<<"Enter personal data"<<endl;
        cout<<"Enter Name : ";
        cin >>name;
        cout<<"Enter Surname : ";
        cin>>surname;
        
        while(notValid){
        cout<<"Please Enter Valid Birth Date!"<<endl;
        cout<<"Enter year"<<endl;
        cin>>year;
        cout<<"Enter month"<<endl;
        cin>>month;
        cout<<"Enter date"<<endl;
        cin>>date;
        if(isYearValid(year) && isMonthValid(month,year) && isDateValid(date,month,year)) notValid=false;
        }
        notValid=true;
        cout<<"Enter Mob : ";
        cin>>mob;
    }
    
    void dis_per()                                              //func to display personal data
    {   cout<<"*************************************\n";
        cout<<"Name: "<<name<<" "<<surname<<endl;
        cout<<"Dob:"<<date<<"/"<<month<<"/"<<year<<endl;
        cout<<"Mob: "<<mob<<endl;
        cout<<"*************************************\n";
    }
    
};

class professional_data{                                        //declared professional_data class
    protected:
    string company,title,project;
    
    public:
    professional_data(){                                        //def constructor
        company="DE";
        title="CEO";
        project="WF";
    }
    void getpro(){                                              //func to get professional_data
        cout<<"Enter professional data"<<endl;
        cout<<"Enter Company: ";
        cin >>company;
        cout<<"Enter Title: ";
        cin>>title;
        cout<<"Enter Project: ";
        cin>>project;
    }
    
    void dis_pro(){                                             //func to show professional_data
        cout<<"*************************************\n";
        cout<<"Company : "<<company<<endl;
        cout<<"Title : "<<title<<endl;
        cout<<"Project : "<<project<<endl;
        cout<<"*************************************\n";
    }
};

class academic_data{                                            //declared academic_data class
    protected:
    string clg,branch;
    int pass;
    float cgpa;
    
    public:
        academic_data(){
            clg="VIT Pune";
            branch="CSE";
            pass=2024;
            cgpa=10.1;
        }
        void getacad(){                                         //func to get academic_data
        cout<<"Fill academic data"<<endl;
        cout<<"Enter College: ";
        cin >>clg;
        cout<<"Enter Branch : ";
        cin>>branch;
        cout<<"Enter Year of Passing : ";
        cin>>pass;
        cout<<"Enter CGPA: ";
        cin>>cgpa;
    }
    
    void dis_acad()                                             //func to show academic_data
    {
        cout<<"*************************************\n";
        cout<<"College Name: "<<clg<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Year of passing: "<<pass<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<"*************************************\n";
    }    
    
    
};
    

class biodata : public personal_data,public professional_data,public academic_data
{                                                               //declared biodata class
    public:
    void dis_bio()                                              //function to display biodata
    {   
        cout<<"*************************************\n";
        cout<<"Name: "<<name<<" "<<surname<<endl;
        cout<<"Dob:"<<date<<"/"<<month<<"/"<<year<<endl;
        cout<<"Mob: "<<mob<<endl; 
        cout<<"Company : "<<company<<endl;
        cout<<"Title : "<<title<<endl;
        cout<<"Project : "<<project<<endl;        
        cout<<"College Name: "<<clg<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Year of passing: "<<pass<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<"*************************************\n";
    }
};
int main()
{
    int key=10;
    cout<<"                    FILL THE REQUIRED DATA!\n";
    biodata bio;                                                //made obj of biodata
    
    while(key!=0)
    {
        cout<<"1. Fill personal data\n2. Fill professional data\n3. Fill academic data\n4. View personal data\n5. View professional data\n6. View academic data\n9. View Biodata\n0. Exit\n";
        cin>>key;
        
        switch(key){                                    
            case 1:
            bio.getper();                                       //biodata can use functions of parent class as they were declared protected
            break;                                              
            case 2:
            bio.getpro();
            break;
            case 3:
            bio.getacad();
            break;
            case 4:
            bio.dis_per();
            break;
            case 5:
            bio.dis_pro();
            break;
            case 6:
            bio.dis_acad();
            break;
            case 9:
            bio.dis_bio();
            break;
            case 0:
            exit(0);
        }
    }
    
    return 0;
}




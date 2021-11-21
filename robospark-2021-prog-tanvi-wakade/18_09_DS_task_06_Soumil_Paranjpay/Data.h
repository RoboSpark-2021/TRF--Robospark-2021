#include <iostream>
#include <string>

class Personal
{
protected:
    std::string name, surname, address, mobileNumber, dateOfBirth;

public:
    Personal(std::string name, std::string surname, std::string address, std::string mobileNumber, std::string dateOfBirth)
    {
        this->name = name;
        this->surname = surname;
        this->address = address;
        this->mobileNumber = mobileNumber;
        this->dateOfBirth = dateOfBirth;
    }

    std::string getName() const { return name; }
    std::string getSurname() const { return surname; }
    std::string getAddress() const { return address; }
    std::string getMobileNumber() const { return mobileNumber; }
    std::string getDateOfBirth() const { return dateOfBirth; }

    std::string setName(const std::string &name)
    {
        this->name = name;
    }

    std::string setSurname(const std::string &name)
    {
        this->surname = name;
    }

    std::string setAddress(const std::string &address)
    {
        this->address = address;
    }

    std::string setMobileNumber(const std::string &mobileNumber)
    {
        this->mobileNumber = mobileNumber;
    }

    std::string setDateOfBirth(const std::string &dob)
    {
        this->dateOfBirth = dob;
    }

    void printPersonalData()
    {
        std::cout << "Name: " << name << std::endl
                  << "Surname: " << surname << std::endl
                  << "Address: " << address << std::endl
                  << "Mobile Number: " << mobileNumber << std::endl
                  << "Date of birth: " << dateOfBirth << std::endl;
    }

    static Personal input()
    {
        std::string name, surname, address, mobileNumber, dateOfBirth;
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
        std::cout << "Enter surname: ";
        std::getline(std::cin, surname);
        std::cout << "Enter address: ";
        std::getline(std::cin, address);
        std::cout << "Enter mobile number: ";
        std::getline(std::cin, mobileNumber);
        std::cout << "Enter date of birth: ";
        std::getline(std::cin, dateOfBirth);

        return Personal(name, surname, address, mobileNumber, dateOfBirth);
    }
};

class Professional
{
protected:
    std::string nameOfOrganization;
    std::string jobProfile;
    std::string project;

public:
    Professional(std::string nameOfOrganization, std::string jobProfile, std::string project)
    {
        this->nameOfOrganization = nameOfOrganization;
        this->jobProfile = jobProfile;
        this->project = project;
    }

    std::string getNameOfOrganization()
    {
        return this->nameOfOrganization;
    }

    void setNameOfOrganization(std::string nameOfOrganization)
    {
        this->nameOfOrganization = nameOfOrganization;
    }

    std::string getJobProfile()
    {
        return this->jobProfile;
    }

    void setJobProfile(std::string jobProfile)
    {
        this->jobProfile = jobProfile;
    }

    std::string getProject()
    {
        return this->project;
    }

    void setProject(std::string project)
    {
        this->project = project;
    }

    void printProfessionalData()
    {
        std::cout << "Name of organization: " << nameOfOrganization << std::endl
                  << "Job profile: " << jobProfile << std::endl
                  << "Project: " << project << std::endl;
    }

    static Professional input()
    {
        std::string nameOfOrganization, jobProfile, project;
        std::cout << "Enter name of organization: ";
        std::getline(std::cin, nameOfOrganization);
        std::cout << "Enter job profile: ";
        std::getline(std::cin, jobProfile);
        std::cout << "Enter project: ";
        std::getline(std::cin, project);

        return Professional(nameOfOrganization, jobProfile, project);
    }
};

class Academic
{
protected:
    int yearOfPassing;
    double cgpa;
    std::string collegeName;
    std::string branch;

public:
    Academic(int yearOfPassing, double cgpa, std::string collegeName, std::string branch)
    {
        this->yearOfPassing = yearOfPassing;
        this->cgpa = cgpa;
        this->collegeName = collegeName;
        this->branch = branch;
    }

    int getYearOfPassing()
    {
        return this->yearOfPassing;
    }

    void setYearOfPassing(int yearOfPassing)
    {
        this->yearOfPassing = yearOfPassing;
    }

    double getCgpa()
    {
        return this->cgpa;
    }

    void setCgpa(double cgpa)
    {
        this->cgpa = cgpa;
    }

    std::string getCollegeName()
    {
        return this->collegeName;
    }

    void setCollegeName(std::string collegeName)
    {
        this->collegeName = collegeName;
    }

    std::string getBranch()
    {
        return this->branch;
    }

    void setBranch(std::string branch)
    {
        this->branch = branch;
    }

    void printAcademicData()
    {
        std::cout << "Year of passing: " << yearOfPassing << std::endl
                  << "CGPA: " << cgpa << std::endl
                  << "College name: " << collegeName << std::endl
                  << "Branch: " << branch << std::endl;
    }

    static Academic input()
    {
        int yearOfPassing;
        double cgpa;
        std::string collegeName, branch;

        std::cout << "Enter year of passing: ";
        std::cin >> yearOfPassing;
        std::cout << "Enter CGPA: ";
        std::cin >> cgpa;
        std::cout << "Enter college name: ";
        std::getline(std::cin, collegeName);
        std::cout << "Enter branch: ";
        std::getline(std::cin, branch);

        return Academic(yearOfPassing, cgpa, collegeName, branch);
    }
};

class BioData : Personal, Professional, Academic
{
public:
    BioData() : Personal("Soumil", "Paranjpay", "Pune", "99", "07/07/2002"), Professional("TRF", "Trainee", "Robospark-2021"), Academic(2024, 9.1, "VIT Pune", "E&TC")
    {
    }

    void printData()
    {
        std::cout << "\nAcademic data: " << std::endl;
        this->printAcademicData();
        std::cout << "\nPersonal data: " << std::endl;
        this->printPersonalData();
        std::cout << "\nProfessional data: " << std::endl;
        this->printProfessionalData();
    }
};

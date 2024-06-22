#include <iostream>
#include <string>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;
    //Properties or Attributes
    // Non-parameterized
    // Teacher(){
    //     dept = "Computer Science";
    // }
    // Parameterized
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    //methods or member Functions
    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout<<"Name : "<< name<<endl;
        cout<<"Department : " <<dept<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Salary : "<<salary<<endl; 
    }
};

int main(){
    Teacher t1("Nizam Malik","Computer Science","C++", 25000);
    t1.getInfo();
    // cout<<"Name : "<< t1.name<<endl;
    // cout<<"Department : " <<t1.dept<<endl;
    // cout<<"Subject : "<<t1.subject<<endl;
    // cout<<"Salary : "<<t1.salary<<endl; 
    return 0;
}
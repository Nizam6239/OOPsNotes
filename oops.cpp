#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //properties or attributes
    public:
    Teacher(){
        cout<<"Hello , I am the teacher class."<<endl;
    }
    string name;
    string dept;
    string subject;
    double salary;

    //methods or member Functions
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    Teacher t1;
    t1.name = "Nizam Malik";
    t1.dept = "Computer Science";
    t1.subject = "C++";
    t1.salary = 25000;
    cout<<"Name : "<< t1.name<<endl;
    cout<<"Department : " <<t1.dept<<endl;
    cout<<"Subject : "<<t1.subject<<endl;
    cout<<"Salary : "<<t1.salary<<endl; 
    return 0;
}
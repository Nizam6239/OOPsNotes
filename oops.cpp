#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //Properties or Attributes
    public:
    // Non-parameterized
    // Teacher(){
    //     dept = "Computer Science";
    // }
    // Parameterized
    Teacher(string n, string d, string sub, double sal){
        name = n;
        dept = d;
        subject = sub;
        salary = sal;
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
    Teacher t1("Nizam Malik","Computer Science","C++", 25000);
    cout<<"Name : "<< t1.name<<endl;
    cout<<"Department : " <<t1.dept<<endl;
    cout<<"Subject : "<<t1.subject<<endl;
    cout<<"Salary : "<<t1.salary<<endl; 
    return 0;
}
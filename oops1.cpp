#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;

    Student(string name , double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    void getInfo(){
        cout<<"Name : "<< name <<endl;
        cout<<"cgpa : "<< *cgpaPtr <<endl;
    }

    ~Student(){
        cout<< "I am deleting the everything."<<endl;
        delete cgpaPtr;
    }
};

int main(){
    Student s1("Nizam Malik", 8.50);
    s1.getInfo();
    return 0;
}
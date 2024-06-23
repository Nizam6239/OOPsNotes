#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    ~Person(){
        cout<<"This is a Person Destructor."<<endl;
    }
};

class Student : public Person{
public:
    int rollNo;
    Student(string name, int age, int rollNo) : Person(name, age){
        this->rollNo = rollNo;
    }
    void getInfo(){
        cout<< "Name : " << name <<endl;
        cout << "Age : " << age << endl;
        cout << "rollNo : " << rollNo << endl;
    }
    ~Student(){
        cout<<"This is the Student destuctor."<< endl;
    }
};

int main(){
    Student s1("Nizam Malik", 21, 1234);
    s1.getInfo();
    return 0;
}
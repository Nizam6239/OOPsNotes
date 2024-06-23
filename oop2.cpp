#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;

    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

    Person(){
        cout<<"This is a Person Constructor."<<endl;
    }
    ~Person(){
        cout<<"This is a Person Destructor."<<endl;
    }
};

class Student : public Person{
public:
    int rollNo;
    Student(){
        cout<<"This is the Student constructor."<<endl;
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
    Student s1;
    s1.name = "Nizam Malik";
    s1.age = 21;
    s1.rollNo = 2113;
    s1.getInfo();
    return 0;
}
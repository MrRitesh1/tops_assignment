// hierarchial inheritance example
#include <iostream>
using namespace std;
class Person // base class 1 
{
private:
    string name;
    int age;

public:
    void setPerson()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void displayPerson()
    {
        cout << "Name:  " << name << endl;
        cout << "Age:    " << age << endl;
    }
};
class Student : Person // base class 2
{
private:
    float percentage;

public:
    void setStudent()
    {
        setPerson();
        cout<<"Enter percentage of Student: ";
        cin>>percentage;       
    }
    void displayStudent()
    {
        cout<<"-----------------------------"<<endl;
        cout << "Student details are: \n";
        displayPerson();
        cout << "Prcentage is:  " << percentage << endl;
    }
};
class Teacher : Person // derived class
{
private:
    float salary;

public:
    void setTeacher()
    {
        setPerson();
        cout<<"Enter teacher salary: ";
        cin>>salary;
    }
    void displayTeacher()
    {
        cout<<"-----------------------------"<<endl;
        cout << "Teachers details are: \n";
        displayPerson();
        cout << "Salary:  " << salary << endl;
    }
};
int main()
{
    Student s;
    int num1,num2;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter number of student: ";
    cin>>num1;
    for (int i=0;i<num1;i++)
    {
        s.setStudent();
        s.displayStudent();
        cout<<"-----------------------------"<<endl;
    }
    Teacher t;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter number of teacher: ";
    cin>>num2;
    for (int i=0;i<num2;i++)
    {
        t.setTeacher();
        t.displayTeacher();
        cout<<"-----------------------------"<<endl;
    }
        return 0;
}
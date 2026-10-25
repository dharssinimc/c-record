#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    // constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Student object created" << endl;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // destructor
    ~Student()
    {
        cout << "Student object destroyed" << endl;
    }
};

int main()
{
    Student s1(21, "Priya");
    s1.display();
    Student s2(23, "Ram");
    s2.display();
    return 0;
}
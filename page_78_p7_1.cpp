//PROGRAM 7.1 page 78
/*
Bayes Ahmed Shoharto
A18CS4051
*/
#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
    string name, code;

public:
    Course(string n, string c);
    string getName() { return name; }
    string getCode() { return code; }
};

class Student
{
private:
    string name, matrix;
    Course *subject;

public:
    Student(string n, string m);
    void regCourse(Course *subject);
    void display();
};

Course::Course(string n, string c)
{
    name = n;
    code = c;
}

Student::Student(string n, string m)
{
    name = n;
    matrix = m;
}

void Student::regCourse(Course *c)
{
    subject = c;
}

void Student::display()
{
    cout << name << "  (" << matrix << ") register "
         << subject->getName() << " (" << subject->getCode() << ")" << endl;
}

int main()
{
    Course *c = new Course("PT2", "SCSJ1023");
    Student s("Ainul Hashim", "A18CS0044");

    s.regCourse(c);
    s.display();

    return 0;
}

//Program 7.2
/*
Bayes Ahmed Shoharto
A18CS4051
*/
#include <iostream>
using namespace std;

class Course
{
private:
    string name;
    string code;
    int section;

public:
    Course(string name, string code, int section);
    string getName();
};

Course::Course(string name, string code, int section)
{
    this->name = name;
    this->code = code;
    this->section = section;
}

string Course::getName()
{
    return name;
}

class Lecturer
{
private:
    string name;
    Course *C;

public:
    Lecturer(string name);
    void teach(Course *subject);
    void print();
};

Lecturer::Lecturer(string name)
{
    this->name = name;
}
void Lecturer::teach(Course *subject)
{
    C = subject;
}
void Lecturer::print()
{
    cout << name << "Lecturer " << C->getName() << endl;
}

int main()
{
    Course *subj = new Course("Software Testing", "SCSJ3343", 1);
    Lecturer lect1("Radziah Mahmad");
    lect1.teach(subj);
    lect1.print();
    return 0;
}
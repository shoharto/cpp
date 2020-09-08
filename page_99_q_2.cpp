/*
Bayes Ahmed Shoharto
A18CS4051
*/

#include <iostream>
using namespace std;

class rectangle
{
protected:
    double width;
    double length;
    double ca();

public:
    rectangle(double, double);
    void dis();
};

rectangle::rectangle(double width, double length)
{
    this->width = width;
    this->length = length;
}

void rectangle::dis()
{
    cout << width << endl;
    cout << length << endl;
}

double rectangle::ca()
{
    return width * length;
}

class sqa : protected rectangle
{
private:
    double hei;

public:
    sqa(double, double, double);
    double cav();
    void dis();
};

sqa::sqa(double hei, double width, double length) : rectangle(width, length)
{
    this->hei = hei;
    this->width = width;
    this->length = length;
}

double sqa::cav()
{
    return (width * length * hei);
}

void sqa::dis()
{
    rectangle::dis();
    cout << hei << endl;
    cout << cav() << endl;
}

int main()

{
    sqa squarebox(15.0, 10.0, 10.0);
    squarebox.cav();
    squarebox.dis();
    return 0;
}

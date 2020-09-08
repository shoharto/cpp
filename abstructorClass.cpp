#include <iostream>
using namespace std;

class MobileUser
{
public:
    virtual void sendMessage() = 0;
};

class Rahim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "This is Rahim:" << endl;
    }
};

class Karim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "This is Karim:" << endl;
    }
};

int main()
{
    MobileUser *m;

    Rahim r;
    Karim k;

    m = &r;
    m = &k;
    m->sendMessage();
    m->sendMessage();
    return 0;
}
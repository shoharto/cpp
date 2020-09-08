#include <iostream>
#include <string>
using namespace std;

class Shoclass
{
public:
    Shoclass(string z)
    {
        setName (z);
    }
    void setName(string x)
    {
        name = x;
    }

    string getName()
    {
        return name;
    }

private:
    string name;
};


    
int main()
{
    Shoclass ob1("sho");
    return 0;
}
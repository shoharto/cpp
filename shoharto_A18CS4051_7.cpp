#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Person
{
private:
    string 	name,
			nric;
    double 	height,
			weight,
			bmi_index,
			weight_status;
    int 	bmi_status;
public:
    Person(const string &name, const string &nric, double height, double weight, int bmi_status)
    {
        this->name = name;
        this->bmi_status = bmi_status;
        this->height = height;
        this->weight = weight;
        this->nric= nric;
    }
    
    string getName()
    {
        return this->name;
    }
    
    
    string getGender()
    {
        string gendercodechar = nric.substr(11,1);
        int gendercode;
        gendercode = atoi(gendercodechar.c_str());
        if (gendercode%2 == 0)
    	return"female";
        else
        return "male";

    }
    
    
    int getAge()
    {
        string agestring = nric.substr(0,2);
        int yr = atoi(agestring.c_str());
        
        int age;
        if(yr <= 2)
        {
        	age = 20 - yr;
		}
		else
		{
			age = (100 - yr) + 20;
		}
        return age;
    }

    void calBmi()
    {
        if ((this->getAge())%2 == 0)
        {
            this->bmi_index = (10*this->weight)-(5*this->getAge())-161;
        }
        else
        {
            this->bmi_index = (10*this->weight)-(5*this->getAge())+5;
        }

        if (this->bmi_status == 1)
        {
            this->weight_status = bmi_index*1.2;
        }
        if (this->bmi_status == 2)
        {
            this->weight_status = bmi_index * 1.375;
        }
        if (this->bmi_status == 3)
        {
            this->weight_status = bmi_index * 1.55;
        }
        if (this->bmi_status == 4)
        {
            this->weight_status = bmi_index * 1.725;
        }
        if (this->bmi_status == 5)
        {
            this->weight_status = bmi_index * 1.9;
        }
    }
   





void Person::print()
{
    string 	name,
    			nric;
    	double	height,
    			weight;
    	int 	bmi_status;
    	cout<<" Input"<<endl;
    	cout<<" Name: "<<endl;
    	cin >> name;
    	
    	cout<<" NRIC Number (Without hypen '-)"<<endl;
    	cin >> nric;
    	
        cout<<" Height ( in metre)"<<endl;
    	cin >> height;
    	
    	cout<<" Weight (In KG)"<<endl;
    	cin >> weight;
    	
    	cout << "Bmi Status:";
    	cin >> bmi_status;
    	
    	while(bmi_status >5 || bmi_status < 1)
    	{
    		cout << "bmi_status:";
    		cin >> bmi_status;
		}
    	
		Person(name, nric, height, weight, bmi_status);
}

int main()
{
    string name, nric, height, weight, bmi_status;
    cin >> name;
    cin >> nric;
    cin >> height;
    cin >> weight;
    cin>> bmi_status;
    Person stu1(name, nric, height, weight, bmi_status);
    stu1.print();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class teacher{
private: //can access from only same class
    double salary;

protected:// can only access from the same class and derivated class

public: //can access from anywhere
    string name;
    int age;
    
    //setter method/function to set the private value
    void setSalary(double a)
    {
        salary = a;
    }

    //getter method/function to get the private value
    double getSalary()
    {
        return salary;
    }
};

class student{

public:
    string name;
    int age;

};


int main()
{
    teacher obj1;
    obj1.age = 45;
    obj1.name = "A";

    obj1.setSalary(25000.00);
    cout << obj1.getSalary() << endl;
}
#include<iostream>
#include <cstring> 
using namespace std;

class Employee {
    private: 
    char* firstName;
    string lastName;
    int monthlySalary;

    public:
    // setter
    void setData(const char* f, const string l, int s) {
        firstName = new char[strlen(f) + 1];
        strcpy(firstName, f);

        lastName = l;

        if (s > 0)
            monthlySalary = s;
        else
            monthlySalary = 0;

    }
    // getter
    
        char* getfirstName() {return firstName;}
        string getlastName() {return lastName;}
        int getmonthlySalary() {return monthlySalary;}
    
    // yearly salary
    int yearlySalary() {
        return monthlySalary * 12;
    }
    // salary raise
    void raiseSalary() {
        monthlySalary = monthlySalary + (monthlySalary * 0.10);
    }

};

int main(){
    Employee e1,e2;
    e1.setData("Areeba","Ilyas",100000);
    e2.setData("Ali","Hassan",200000);

    // Before raise
    cout<<"Yearly Salary of "<<e1.getfirstName()<<" "<<e1.getlastName()<<" is: "<<e1.yearlySalary()<<endl;
    cout<<"Yearly Salary of "<<e2.getfirstName()<<" "<<e2.getlastName()<<" is: "<<e2.yearlySalary()<<endl;

    e1.raiseSalary();
    e2.raiseSalary();

    // After raise
    cout<<"After raise: "<<endl;
    cout<<"Yearly Salary of "<<e1.getfirstName()<<" "<<e1.getlastName()<<" is: "<<e1.yearlySalary()<<endl;
    cout<<"Yearly Salary of "<<e2.getfirstName()<<" "<<e2.getlastName()<<" is: "<<e2.yearlySalary()<<endl;

}
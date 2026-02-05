#include<iostream>
using namespace std;

class teacher {
    public:
    string name;
    string subject;
    double salary;
};

int main(){
    teacher t1;
    t1.name= "Areeba";
    t1.subject="c++";
    t1.salary= 25000;

    cout<<t1.name<<"\n"<<t1.subject<<"\n"<<t1.salary;
}
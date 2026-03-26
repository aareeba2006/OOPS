#include<iostream>
using namespace std;

class person{
    public:
    int *age;

    person(int a){
        age = new int(a);
    }
    
    // Deep Copy Constructor
    person(const person &a){
        age = new int(*a.age);
    }

    void display(string name){
        cout<<name<<" age: "<<*age<<endl;
    }

    ~person(){
       delete age;
    }
};

int main(){
    person p1(15);
    person p2=p1;
    *p2.age=20;

    p1.display("p1");
    p2.display("p2");
}
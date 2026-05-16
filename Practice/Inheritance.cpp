#include<iostream>
using namespace std;

class person {
    public:
    string name;

    void display(){
        cout<<"Name: "<<name<<endl;
    }
};

class student : public person {
    public: 
    int rollno;

    void show(){
        cout<<"Roll no: "<<rollno<<endl;
    }
};

int main (){
    student s1;
    s1.name= "Areeba";
    s1.rollno= 1001;

    s1.display();
    s1.show();

    return 0;
}
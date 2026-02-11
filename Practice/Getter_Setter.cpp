#include<iostream>
using namespace std;

class teacher {
    private:
        double salary;
    public:
        string name;
        string subject;
    

    void changeSub(string newSub){
        subject= newSub;
    }
    
    //setter
    void setsalary(double s) {
        salary = s;
    }
     
    //getter
    double getsalary(){
        return salary;
    }
     
};

int main(){
    teacher t1;
    t1.name= "Areeba";
    t1.subject="c++";
    t1.setsalary(25000);
    
    cout<<t1.name<<"\n"<<t1.subject<<"\n"<<t1.getsalary();
}
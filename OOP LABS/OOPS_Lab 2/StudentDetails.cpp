#include<iostream>
using namespace std;

class student {
    public:
    string name;
    int roll_no;
    int semester;
    char section;
    
    // Constructor
    student (string n, int r, int sem, char sec) {
             name=n;
             roll_no=r;
             semester=sem;
             section=sec;
    }

    // Function to display details of section A students
    void display(){
    
      if(section =='A'){
        cout<<"Name is: "<<name<<endl;
        cout<<"Roll no is: "<<roll_no<<endl;
        cout<<"Semster is: "<<semester<<endl;
        cout<<"Section is: "<<section<<endl;
      }
    }
    
    
};

int main(){
    
    student students[4]={
        {"Areeba",101, 1,'A'},
        {"Nabiha",101, 1,'A'},
        {"Huzaifa",101, 1,'B'},
        {"Mubbashir",101, 1,'C'}
    };
    
    for(int i=0; i<4; i++){
     students[i].display();
    }
    
}

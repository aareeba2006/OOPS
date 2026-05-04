#include<iostream>
using namespace std;

class complex {
    private:
    int *real;
    int *imag;

    public:
    // Dynamic Memory Allocation
    complex(int i,int r){
        real=new int;
        imag=new int;
        *real=r;
        *imag=i;
    }
    
    // Copy Constructor
    complex(const complex& c){
        real=new int;
        imag=new int;
        *real= *(c.real);
        *imag= *(c.imag);
    }

    // Display
    void display(){
         cout<<"Complex no is:"<<*real<<"+"<<*imag<<"i"<<endl;
    }

    ~complex(){
        delete real;
        delete imag;
    }
};

int main(){
    
    complex c1(3,4);
    complex c2(c1);

   c1.display();
   c2.display();
}
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    int *p1, *p2, *p3;
    int temp;

    // Taking values as input
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    
    // storing address
    p1 = &a;
    p2 = &b;
    p3 = &c;
    
    // Swapping
    temp = *p1;
    *p1 = *p2;
    *p2 = *p3;
    *p3 = temp;

    cout<<"After swapping values are : ";
    cout<<"a= "<< a << "\n" << "b = "<< b << "\n" << "c= " << c  ;



}
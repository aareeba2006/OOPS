#include<iostream>
using namespace std;
int main(){
    int n,m1,m2,m3,m4,m5;
    int totalMarks;
    float Percentage;

    cout<<"Enter a roll number: ";
    cin>>n;

    cout<<"The marks of math: ";
    cin>>m1;

    cout<<"The marks of science: ";
    cin>>m2;

    cout<<"The marks of english: ";
    cin>>m3;

    cout<<"The marks of urdu: ";
    cin>>m4;

    cout<<"The marks of islamiat: ";
    cin>>m5;
 
    // Calculate total marks
    totalMarks=m1+m2+m3+m4+m5;

     // Calculate percentage
    Percentage= (totalMarks * 100)/500 ;

     // Display Results
    cout<<"Total marks obtained is: "<<totalMarks<<"\n";
    cout<<"The percentage is: "<<Percentage<<"\n";
}
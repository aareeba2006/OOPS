#include<iostream>
using namespace std;
int main(){
    float C,F;

    // Taking temperarure as input
    cout<<"Enter temperature in Fahrenheit= ";
    cin>>F;
    
    // Conversion
    C=(F-32)/1.8;
    
    // Temperature in celsius
    cout<<"Temperature in Celsius: "<<C;
}
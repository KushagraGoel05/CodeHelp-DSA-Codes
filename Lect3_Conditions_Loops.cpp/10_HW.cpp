//Fahrenheit to celsius, C=5/9*(F-32)

#include<iostream>
using namespace std;

int main(){
    float n;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>n;

    float celsius= (5.0/9)*(n-32);
    cout<<"In Celsius: "<<celsius<<" C"<<endl;

}
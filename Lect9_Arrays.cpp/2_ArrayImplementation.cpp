#include<iostream>
using namespace std;

int main(){
    //declare 
    int number[15];

    //accessing an array
    cout<<"value at 14 index "<<number[14]<<endl;
    cout<<"value at 5 index "<<number[5]<<endl;

    //cout<<"value at 20 index "<<number[20]<<endl;

    //initialising an array
    int second[3]={5,7,11};

    //accessing an element
    cout<<"value at 2 index "<<second[2]<<endl;

    int third[15]={2,7};
    //print the array
    int n=15;
    for(int i=0; i<n; i++){
        cout<<third[i]<<" ";
    }
    cout<<endl;

    //Initializing all locations with 0
    int fourth[10] = {0};

    cout<<"Printing the array"<<endl;
    //print the array
    n=10;
    for(int i=0; i<n; i++){
        cout<<third[i]<<" ";
    } 
    cout<<endl;

    //Initializing all locations with 1 [Not possible with below line]
    int fifth[10] = {1};

    cout<<"Printing the array"<<endl;
    //print the array
    n=10;
    for(int i=0; i<n; i++){
        cout<<fifth[i]<<" ";
    } 
}
//Create Fibonaaci series such that n gives Nth element of the series.

#include<iostream>
using namespace std;

int Fibonnaci(int n){
    int a = 0;
    int b = 1;
    for(int i=3; i<=n; i++){
        int nextNum = a + b;
        a = b;
        b = nextNum;
    }
    return b;
}

int main(){
    int x;
    cout<<"Enter the Nth element to find: ";
    cin>>x;

    int answer = Fibonnaci(x);
    cout<<"Nth element is: "<<answer<<endl;

    return 0;
}
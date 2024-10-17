/*  A B C
    A B C
    A B C */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i=1;
    while(i<=n){
        char ch='A';
        int j=1;
        while(j<=n){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
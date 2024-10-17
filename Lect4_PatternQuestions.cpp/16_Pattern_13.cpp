/*  A
    B C 
    C D E 
    D E F G */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    // int row=1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         char ch= 'A'+row+col-2;
    //         cout<<ch<<" ";
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    int i=1;
    while(i<=n){
        char ch='A'+i-1;
        int j=1;
        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
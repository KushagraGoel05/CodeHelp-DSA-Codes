/*  A
    B B
    C C C  */

#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter n: ";
    cin>>n;

//    char ch='A';
//    int i=1;
//    while(i<=n){
//        int j=1;
//        while(j<=i){
//            cout<<ch<<" ";
//            j=j+1;
//        }
//        cout<<endl;
//        i=i+1;
//        ch=ch+1;
//    }

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch=('A'+ row - 1);
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
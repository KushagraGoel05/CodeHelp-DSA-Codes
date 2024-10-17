/*  D
    C D
    B C D 
    A B C D  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int row=1;
    while(row<=n){
        char first ='A'+n-row;
        int col=1;
        while(col<=row){
            cout<<first<<" ";
            first=first+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
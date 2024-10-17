/*  1
    2 3
    3 4 5 
    4 5 6 7  */

#include<iostream>
using namespace std;

/*int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int row=1;
    while(row<=n){
        int value=row;
        int col=1;
        while(col<=row){
            cout<<value<<" ";
            value=value+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/

//Without usinf extra variable value.
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int row=1;
    while(row<=n){
        int col=row;
        while(col<row*2){
            cout<<col<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
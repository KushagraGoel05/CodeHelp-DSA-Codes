/*  9 8 7
    6 5 4
    3 2 1 */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int count=n*n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
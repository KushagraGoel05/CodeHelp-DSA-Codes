/*  ****
     ***
      **
       *  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<"  ";
            space=space-1;
        }
        int j=(n-i+1);
        while(j){
            cout<<"* ";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }

    // int i=1;
    // while(i<=n){
    //     int j=1, space=1;
    //     while(space<i){
    //         cout<<"  ";
    //         space=space+1;
    //     }
    //     while(j<=n-i+1){
    //         cout<<"* ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
}
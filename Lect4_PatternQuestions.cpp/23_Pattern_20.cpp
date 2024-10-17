/*     1
      23
     456
    78910   */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int count=1;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=(n-i)){
            cout<<"  ";
            space=space+1;
        }
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
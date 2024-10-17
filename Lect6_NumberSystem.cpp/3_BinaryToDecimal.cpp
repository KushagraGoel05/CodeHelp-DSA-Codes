#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number in Binary Form: ";
    cin>>n;

    int ans=0;
    int i=0;

    // while(n!=0){

    //     int digit= n%10;
    //     ans=(digit*pow(2,i))+ans;

    //     n=n/10;
    //     i++;
    // }

    // cout<<"Decimal Form: "<<ans<<endl;

    while(n!=0){
        int digit= n % 10;

        if(digit==1){
            ans=ans+pow(2,i);
        }

        n=n/10;
        i++;
    }
    cout<<"Decimal Form: "<<ans<<endl;

}
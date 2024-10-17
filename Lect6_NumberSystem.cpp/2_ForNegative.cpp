#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long long int n;
    cout<<"Entere negative decimal number: ";
    cin>>n;

    if(n<0){
        n=pow(2,16)+n;
    }

    float ans=0;
    unsigned long long int i=0;
    while(n){
        int lastBit=n&1;
        ans=(pow(10,i)*lastBit)+ans;
        n=n>>1;
        i++;
    }
    cout<<"Binary Form: "<<ans<<endl;
}
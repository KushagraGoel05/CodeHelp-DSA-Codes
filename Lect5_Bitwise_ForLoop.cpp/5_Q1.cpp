//Print sum of 1 to n.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int sum=0;

    for(int i=1; i<=n; i++){
        sum+=i;
    }

    cout<<"Sum of first "<<n<<" digits is: "<<sum;
}
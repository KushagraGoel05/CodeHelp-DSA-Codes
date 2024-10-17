//Find the sum of all even numbers from 1 to n.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int sum=0;
    int i=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }

    cout<<"Sum of even nos. b/w 1 to "<<n<<" is : "<<sum<<endl;
}
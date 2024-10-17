//A.P= (3*n+7) and make a function to give output for any given value of n.

#include<iostream>
using namespace std;

int ap(int n){
    int ans;
    ans = 3*n+7;

    return ans;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int answer = ap(n);
    cout<<"The Nth term is: "<<answer<<endl;

    return 0;
}
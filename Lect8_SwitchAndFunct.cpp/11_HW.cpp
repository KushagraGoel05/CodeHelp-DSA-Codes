//Find the total number of set bits(1) in a&b where a and b are deciaml nos
//Eg: a=2=10  and b=3=11 whuch in total has 3 set bits.

#include<iostream>
#include<math.h>
using namespace std;

int setBitCounter(int n){
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}

int main(){
    int a,b;
    cout<<"Enter the values: ";
    cin>>a;
    cin>>b;

    int answer = setBitCounter(a)+setBitCounter(b);
    cout<<"Number of set bits= "<<answer<<endl;

    return 0;
}
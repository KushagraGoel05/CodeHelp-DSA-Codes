#include<iostream>
using namespace std;

int power(int num1, int num2){
    int ans=1;
    for(int i=0; i<=num2; i++){
        ans = ans*num1;
    }

    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;

    int answer= power(a,b);
    cout<<"Answer is: "<<answer<<endl;
    

    return 0;
}

// int power(){
//     int a,b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1; i<=b; i++){
//         ans = ans*a;
//     }

//     return ans;
// }

// int main(){

//     int answer= power();
//     cout<<"Answer is: "<<answer<<endl;
    

//     return 0;
// }
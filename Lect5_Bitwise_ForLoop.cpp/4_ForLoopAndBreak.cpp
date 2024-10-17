#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

//NORMAL FOR LOOP
    // for(int i=0; i<=n; i++){
    //     cout<<i<<endl;
    // }

//REPLACING INTIALIZATION
    // int i=0;
    // for(; i<=n; i++){
    //     cout<<i<<endl;
    // }

//REPLACING UPDATION
    // int i=0;
    // for(; i<=n; ){
    //     cout<<i<<endl;
    //     i++;
    // }

//REPLACING CONDITION(loop goes for infinityyy)
    // int i=0;
    // for(; ; ){
    //     if(i<=n){
    //         cout<<i<<endl;
    //     }
    //     i++;
    // }

//BREAK KEYWORD USAGE
    // int i=0;
    // for(; ; ){
    //     if(i<=n){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

//USING MULTIPLE VARIABLES IN SAME LOOP
//     for(int a=0, b=1, c=2; a>=0 && b>=1 && c>=2; a--, b--, c--){
//         cout<<a<<" "<<b<<" "<<c<<" ";
//     }
// }


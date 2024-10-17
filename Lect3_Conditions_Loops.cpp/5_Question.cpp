#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"Enter the character: ";
    cin>>a;

    if(a>='A' && a<='Z'){
        cout<<"This is uppercase"<<endl;
    }
    else if(a>='a' && a<='z'){
        cout<<"This is lowercase"<<endl;
    }
    else if(a>='1' && a<='9'){
        cout<<"This is a digit"<<endl;
    }
}
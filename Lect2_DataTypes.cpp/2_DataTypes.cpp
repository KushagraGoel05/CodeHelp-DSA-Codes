#include<iostream>
using namespace std;

int main(){
    int a=4;
    cout<<a<<endl;

    char b= 'v';
    cout<<b<<endl;

    bool bl=true;;
    cout<<bl<<endl;

    float f=1.2;
    cout<<f<<endl;

    double d=1.234;
    cout<<d<<endl;

    int size_int=sizeof(a);
    cout<<"Size of a is: "<<size_int<<endl;

    int size_char=sizeof(b);
    cout<<"Size of b is: "<<size_char<<endl;

    int size_bool=sizeof(bl);
    cout<<"Size of bl is: "<<size_bool<<endl;

    int size_float=sizeof(f);
    cout<<"Size of f is: "<<size_float<<endl;

    int size_double=sizeof(d);
    cout<<"Size of d is: "<<size_double<<endl;
}
// WAP such that we can have same values for all the elements of an array
#include<iostream>
using namespace std;

int main(){
    int array[1000];
    for(int i=0; i<1000; i++){
        array[i]=1;
        cout<<array[i]<<" ";
    }

    return 0;
}
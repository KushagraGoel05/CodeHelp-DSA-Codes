#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"printing the array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}

int main(){
    int third[15]= {2,7};
    printArray(third, 15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout<<"Size of 3rd is: "<<thirdSize<<endl;
    //this will give the actual size aur jitne elements hai array mein utna size nhi dega

    int fourth[10]= {0};
    printArray(fourth, 10);

    int fifth[10]= {1};
    printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"Size of 5th is: "<<fifthSize<<endl;

    char ch[5] = {'a','b','c','r','p'};
    cout<<ch[3]<<endl;
    //printArray(ch); //ERROR as function takes integer array as input

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];



    return 0;

}
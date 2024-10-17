//Print sum of all elements in an array
#include<iostream>
using namespace std;

int arraySum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    return sum;
}

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int arr[5];
    cout<<"Enter array elements: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Sum of all elements is: "<<arraySum(arr, size)<<endl;

    return 0;
}
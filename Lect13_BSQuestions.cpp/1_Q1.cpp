//First and Last Position of an Element In Sorted Array

#include<iostream>
using namespace std; 

int firstOccurence(int arr[], int n, int key){
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans; 
}


int lastOccurence(int arr[], int n, int key){
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int arr[11] = {1,2,3,3,3,3,3,3,3,3,5};

    cout<<"First Occurence of 3 is at Index: "<<firstOccurence(arr, 11, 3)<<endl;
    cout<<"Last Occurence of 3 is at Index: "<<lastOccurence(arr, 11, 3);

    return 0;
}

//To find total no. of occurence we just have to find sirst and last occurence
// and do (last occurence index - first occurence index) + 1
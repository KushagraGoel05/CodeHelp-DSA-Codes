#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0, j = 0, k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            // arr3[k] = arr1[i];
            // k++;
            // i++;
            arr3[k++] = arr1[i++];  //Short  method for above 3 lines
        }
        else{
            // arr3[k] = arr2[j];
            // k++;
            // j++;
            arr3[k++] = arr2[j++];  //Short  method for above 3 lines
        }
    }

    //copy irst array ke elements ko
    while(i<n){
        // arr3[k] = arr1[i];
        // k++; 
        // i++;
        arr3[k++] = arr1[i++];  //Short  method for above 3 lines
    }

    //copy kardo second array ke remaining elements ko
    while(j<m){
        // arr3[k] = arr2[j];
        // k++;
        // j++;
        arr3[k++] = arr2[j++];  //Short  method for above 3 lines
    }
}

void print(int ans[], int n){
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);

    return 0;
}
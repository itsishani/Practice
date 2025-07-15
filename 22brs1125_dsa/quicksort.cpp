#include<iostream>
using namespace std;

// int partition(int arr[], int low, int high){
//     int pivot = arr[high];
//     int i = low -1;
//     for( int j=low; j<high; j++){
//         if(arr[j]<pivot){
//             i++;
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
//     i++;
//     int temp = arr[high];
//     arr[high] = arr[i];
//     arr[i] = temp;
//     return i;
// }

// void quicksort(int arr[],int low, int high){
//     if(low < high){
//         int pi = partition(arr, low, high);
//         quicksort(arr,low,pi-1);
//         quicksort(arr,pi+1,high);
//     }
// }
int partition(int arr[],int low, int high){
    int pivot = arr[high];
    int i = low -1;
    for(int j =low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[high];
    arr[high] = arr[i];
    arr[i] = temp;
    return i;
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi = partition(arr, low, high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main(){
    int arr[] = {4,6,5,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



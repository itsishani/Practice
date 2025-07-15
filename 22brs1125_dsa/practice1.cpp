#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int counter = arr[i];
        int j = i-1;
        while(arr[j]>counter && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = counter;
    }
}

void bubble_sort(int arr[], int n){
    int cntr=1;
    while(cntr < n){
        for(int i=0;i<n-cntr;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
        cntr++;
    }
}

int main(){
    int ar[] = {3,54,32,65,1,12,22};
    int n = sizeof(ar)/sizeof(ar[0]);
    //selection_sort(ar,n);
    insertion_sort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

}
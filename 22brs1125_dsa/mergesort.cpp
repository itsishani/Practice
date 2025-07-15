#include<iostream>
using namespace std;

void conquer(int arr[], int si, int mid, int ei){
    int merged[ei - si+ 1];
    int idx1 = si;
    int idx2 = mid+1;
    int x = 0;
    while(idx1 <= mid && idx2 <= ei){
        if(arr[idx1] <= arr[idx2]){
            merged[x++] = arr[idx1++];
        }
        else{
            merged[x++] = arr[idx2++];
        }
    }
    while(idx1 <= mid){
        merged[x++] = arr[idx1++];
    }
    while(idx2 <= ei){
        merged[x++] = arr[idx2++];
    }
    // int size = sizeof(merged)/sizeof(merged[0]);
    // cout<<size;
    // int j = si;
    // for(int i = 0; i< size; i++){
    //     arr[j] = merged[i];
    //     j++;
    // }
}

void divide(int arr[], int si, int ei){
    if(si >= ei){
        return;
    }
    int mid = si + (si - ei)/2;
    divide(arr, si, mid);
    divide(arr, mid, ei);
    conquer(arr, si, mid, ei);
}


int main(){
    int arr[] = { 3, 5, 7, 8, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    divide(arr, 0, n-1);
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int binarysearch(int arr[],int low,int high,int ser){
    while(low <= high){
        int mid = low +(high -1)/2;
        if(arr[mid]==ser){
            return mid ;
        }
        if(arr[mid]<ser){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}

int *selectionsort(int arr[],int n){
    int* resulArr = new int[n];
    int min_index = 0;
    for(int i=0; i<n-1; i++){
        min_index = i;
        for(int j = i+1; j< n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }
    cout<<endl;
    for(int i= 0;i<n;i++){
        resulArr[i] = arr[i];
    }
    return arr;
}
int main(){
    int arr[] = {44,6,10,24,83};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Give the element to be searched: "<<endl;
    cin>>x;
    int res= binarysearch(selectionsort(arr,size),0,size-1,x);
    if(res!=-1){
        cout<<"The number is found at the index "<<res+1<<endl; 
    }
    else{
        cout<<"The number is not found in the array "<<endl;
    }
}
#include<iostream>
#include<string>
using namespace std;


int Binary_Search(int arr[],int key, int l,int h){
    int mid = (l+h)/2;
    if(arr[mid] == key){
        return mid;
    }
    else{
        if(arr[mid] > key){
            Binary_Search(arr,key,mid+1,h);
        }
        else{
            Binary_Search(arr,key,l,mid-1);
        }
    }
}

int Linear_search(int arr[],int key,int size){
    //int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]==key){return i;}
    }
    return -1;
}

int main(){
    int arr[] = {3,5,6,7,9};
    int key = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<Binary_Search(arr,key,0,size)<<endl;
    cout<<Linear_search(arr,key,size);
}
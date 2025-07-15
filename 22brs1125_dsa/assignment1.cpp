
//question 1

#include<iostream>
using namespace std;
int count(int arr[7]){
    int n=0;
    for (int i=0;i<7;i++){
        if(arr[i]>80){
            n++;
        }
    }return n;
}
int main(){
    int arr[7] = {75, 85, 90, 82, 78, 79, 87};
    cout<<"The number of temperatures greater than 80: "<<count(arr);   
}



//question 2
#include<iostream>
using namespace std;
void search(int arr[6], int n){
    int flag=0;
    for(int i=0;i<6;i++){
        if(arr[i]==n){
            flag = 1;
        }
    }if(flag==1){
        cout<<"Room "<<n<<" is available."<<endl;
    }
    else{
        cout<<"Room not available."<<endl;
    }
}
int main(){
    int arr[6] = {101, 102, 103, 104, 105, 106};
    cout<<"Available rooms: "<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"  ";
    }
    int room_no;
    cout<<"\n"<<"Give the room no: "<<endl;
    cin>>room_no;
    search(arr,room_no);
}



//Question 3

#include<iostream>
using namespace std;
void sort(int arr[], int n ){
    for(int i =0; i<n - 1; i++){
        for(int j =0; j < n - 1 - i; j++){
            if(arr[j]>arr[j+1]){
            int t = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t;
        }
        }
    }
    cout<<"Minimum  number: "<<arr[0]<< endl<<"Maximum number: "<<arr[n - 1]<<endl;
}
int main(){
    int numbers[] = { 12, 45, 67, 23, 89, 34, 56, 78, 90, 43, 76, 98, 54, 32, 87, 65, 21, 9, 81, 10 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, size);
}

//Question 4

#include<iostream>
using namespace std;
int main(){
    int mid, end, st, i, num, book_id;
    cout<<"Enter the number of books in the library collection: "<<endl;
    cin>>num;
    int bookIDs[100] = { 101, 203, 305, 407, 509, 611, 713, 815, 917, 1023 };
    st = 0;
    end = num -1;
    cout<<"Enter the number to search from the sorted array: "<<endl;
    cin>>book_id;
    while( st<= end){
        mid= (st+end)/2;
        if(bookIDs[mid]== book_id){
            cout<<"Element is found at index: "<< (mid+1);
            exit(0);
        }
        else if ( book_id > bookIDs[mid]){
            st = mid - 1;
        }
        else if ( book_id < bookIDs[mid]){
            end = mid + 1;
        }
        else{
            cout<<-1;
        }
    }
    return 0;
}
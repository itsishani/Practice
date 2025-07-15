// #include<iostream>
// #include<string>
// using namespace std;

// void selection_sort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[j] = arr[i];
//                 arr[i] = arr[j];
//             }
//         }
//     }
// }

// void Insertion_sort(int arr[],int n){
//     for(int i=1; i<n; i++){
//         int counter = arr[i];
//         int j = i-1;
//         while(arr[j] > counter && j>=0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = counter;
//     }
// }

// void bubble_sort(int arr[], int n){
//     int cntr = 1;
//     while(cntr < n){
//         for(int i =0; i< n-cntr; i++){
//             if(arr[i]>arr[i+1]){
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//             }
//         }
//         cntr++;
//     }
// }

// // void merge(int arr[],int l, int mid, int h){
// //     int i=0,j =0 ,k = 1;
// //     int m = sizeof(arr)/sizeof(arr[0]);

// // }

// // Merge two subarrays L and M into arr
// void merge(int arr[], int p, int q, int r) {
//     // Create L ← A[p..q] and M ← A[q+1..r]
//     int n1 = q - p + 1;
//     int n2 = r - q;

//     int L[n1], M[n2];

//     for (int i = 0; i < n1; i++)
//         L[i] = arr[p + i];
//     for (int j = 0; j < n2; j++)
//         M[j] = arr[q + 1 + j];

//     // Maintain current index of sub-arrays and main array
//     int i, j, k;
//     i = 0;
//     j = 0;
//     k = p;
//     // Until we reach either end of either L or M, pick larger among
//     // elements L and M and place them in the correct position at A[p..r]
//     while (i < n1 && j < n2) {
//         if (L[i] <= M[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = M[j];
//             j++;
//         }
//         k++;
//     }

//     // When we run out of elements in either L or M,
//     // pick up the remaining elements and put in A[p..r]
//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = M[j];
//         j++;
//         k++;
//     }
// }

// void merge_sort(int arr[],int l,int h){
//     if(l<h){
//         int mid  = l+h/2;
//         merge_sort(arr,l,mid);
//         merge_sort(arr,mid+1,h);
//         merge(arr,l,mid,h);
//     }
// }

// int partition(int arr[],int l, int h){
//     int pivot = arr[l];
//     int i =l,j = h;
//     while(arr[i]<= pivot){i++;}
//     while(arr[j]>pivot){j--;}
//     if(i >j){
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     int temp = arr[l];
//     arr[l] = arr[j];
//     arr[j] = temp;
//     return j;
// }

// void quick_sort(int arr[], int l, int h){
//     if(l<h){
//         int j= partition(arr,l,h);
//         quick_sort(arr,l,j);
//         quick_sort(arr,j+1,h);
//     }
// }

// int main(){
//     int arr[] = {3,5,8,6,4,2};
//     bubble_sort(arr,6);
//     // for(int i=0;i<6;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     // cout<<endl;
//     // selection_sort(arr,6);
//     // for(int i=0;i<6;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     // cout<<endl;
//     // //Insertion_sort(arr,6);
//     // for(int i=0;i<6;i++){
//     //     cout<<arr[i]<<" ";
//     // }

//     quick_sort(arr,0,6);
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }

    
// }
// CPP Program to convert postfix to prefix
#include <bits/stdc++.h>
using namespace std;

// function to check if character is operator or not
bool isOperator(char x)
{
	switch (x) {
	case '+':
	case '-':
	case '/':
	case '*':
		return true;
	}
	return false;
}

// Convert postfix to Prefix expression
string postToPre(string post_exp)
{
	stack<string> s;

	// length of expression
	int length = post_exp.size();

	// reading from left to right
	for (int i = 0; i < length; i++) {

		// check if symbol is operator
		if (isOperator(post_exp[i])) {

			// pop two operands from stack
			string op1 = s.top();
			s.pop();
			string op2 = s.top();
			s.pop();

			// concat the operands and operator
			string temp = post_exp[i] + op2 + op1;

			// Push string temp back to stack
			s.push(temp);
		}

		// if symbol is an operand
		else {

			// push the operand to the stack
			s.push(string(1, post_exp[i]));
		}
	}

	string ans = "";
	while (!s.empty()) {
		ans += s.top();
		s.pop();
	}
	return ans;
}

// Driver Code
int main()
{
	string post_exp = "ABC/-AK/L-*";

	// Function call
	cout << "Prefix : " << postToPre(post_exp);
	return 0;
}





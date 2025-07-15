// #include <iostream>
// using namespace std;

// int main() {
//   int number;
//   cout<<"Give a number: ";
//   cin>>number;
//   if(number%2==0){
//     cout<<"Number is even";
//   }
//   else{
//     cout<<"Number is odd";
//   }

//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"The numbers are: \n";
//     for(int i=1;i<=10;i++){
//         cout<<i<<"\n";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Give number 1: ";
    cin>>n1;
    cout<<"\nGive number 2: ";
    cin>>n2;
    cout<<"Sum of the numbers is: "<<n1+n2<<"\n";
    cout<<"Difference between the numbers is: "<<n1-n2<<"\n";
    cout<<"Product of the numbers is: "<<n1*n2<<"\n";
    cout<<"Quotient of the number is: "<<n1/n2<<"\n";
    return 0;
}
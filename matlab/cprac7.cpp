// #include<iostream>
// using namespace std;

// template <typename T>
// T myMax(T x,T y){
//     if(x>y){
//         return x;
//     }
//     else{return y;}
// }

// int main(){
//     cout<< myMax<int>(3,7)<<endl;
//     cout<< myMax<float> (3.5,6.5)<<endl;
//     cout<< myMax<double> (4.55,3.43)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// template <typename T>
// T findlarge(T a[],int n){
//     //T arr[5] = {x,y,z,w};
//     T large = 0;
//     for(int i=0;i<n; i++){
//         if(a[i]>large){
//             large = a[i];
//         }
//     }
//     return large;
// }
// int main(){
//     int arr[] = {3,4,5,6,45,6};
//     char ar[] = {'a','S','E','R'};
//     int n =0;
//     for(int i=0;arr[i]!='\0';i++){
//         n++;
//     }
//     int no =0;
//     for(int i=0;ar[i]!='\0';i++){
//         no++;
//     }
//     cout<< findlarge<int>(arr,n)<<endl;
//     cout<< findlarge<char>(ar,no)<<endl;
// }

// #include<iostream>
// using namespace std;
// template <typename T>
// class Array{
//     private:
//     T* ptr;
//     int size;
//     public:
//     Array(T arr[],int s);
//     void print();
// };
// template <typename T>Array<T> :: Array(T arr[],int s)
// {
//     ptr = new T[s];
//     size = s;
//     for(int i=0; i< size ;i++)
//         ptr[i] = arr[i]; 
// }

// template<typename T> void Array<T>::print()
// {
//     for(int i= 0; i< size; i++)
//         cout<<" "<<*(ptr + i);
//     cout << endl;    
// }

// int main(){
//     int arr[5] = { 1,2, 3,4, 5};
//     Array<int> a(arr, 5);
//     a.print();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// template<class T,class U>
// class myclass{
//     private:
//     T x,
//     T y;
//     myclass(){
//         if(x>y){
//             cout<<x<<endl;    
//         }
//         else{cout<<y<<endl;}
//     }    
// }    ;
// int main(){
//     myclass<int,int> n(2,4);
//     myclass<char,char> w('p','a');
//     myclass<float,float> q(7.3,3.7);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// template <typename T>
// T max(T a, T b) {
//   return (a > b) ? a : b;
// }

// int main() {
// //   int num1 = 10;
// //   int num2 = 20;
//   int result = max<int>(10,20);
//   cout << "Max value is: " << result << endl;
//   return 0;
// }

#include<iostream>
using namespace std;
template <typename T1,typename T2>
class jal{
    public:
    T1 one;
    T2 two;
    jal(T1 ek, T2 dot): one(ek), two(dot) { cout<< one*two<<endl;}
    T1 pehla(){
        //bhejde(one);
        return one*2;
    }
    T2 dusra(){
        return two/2;
    }
};
int main(){
    jal<int,int> p(32,4.5);
    cout<<"Print 1 "<<p.pehla()<<endl;
    cout<<"Print 2 "<<p.dusra()<<endl;
}

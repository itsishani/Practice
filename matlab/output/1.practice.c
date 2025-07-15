// #include<stdio.h>
// int main() {
//      int day;
//   scanf("%d",&day);
  
//   switch (day) {
//     case 1:
//       printf("Monday");
//       break;
//     case 2:
//       printf("Tuesday");
//       break;
//     case 3:
//       printf("Wednesday");
//       break;
//     case 4:
//       printf("Thursday");
//       break;
//     case 5:
//       printf("Friday");
//       break;
//     case 6:
//       printf("Saturday");
//       break;
//     case 7:
//       printf("Sunday");
//       break;
//   }
    
//     return 0;
// }
//Take input of an array .create an array with sum of digits of the terms of the array. In the new array check if any two terms has the sum equal to 20 ,if so print that pair.
#include<stdio.h>
int com(int arr[5]){
  for(int i = 0;i<5;i++){
    for(int j = 1;j<5;j++){
      if(arr[i]+arr[j]==20){
        printf("Pair of numbers is: %d %d\n",arr[i],arr[j]);
      }
    }
  }
  return 0 ;
}
int func(int arr[5]){
  int newarr[5];
  for(int i = 0;i<5;i++){
    int a = arr[i];
    int s = 0,m;
    while(a!=0){
      m = a%10;
      s = s+m;
      a/= 10;
    }
    newarr[i]=s;
    printf("%d\n",newarr[i]); 
  }
  com(newarr);
  return 0;
}

int main(){
  int arr[5];
  for(int i=0;i<5;i++){
    printf("Give the number: \n");
    scanf("%d",&arr[i]);
  }
  for(int i = 0;i<5;i++){
    printf("%d\n",arr[i]);
  }
  func(arr);
  
}
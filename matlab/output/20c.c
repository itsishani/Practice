//1
#include<stdio.h>
main(){
    printf("I am very Expert in C");
 }

//2
#include<stdio.h>
int main(void) {
    int a;
    scanf("%d", &a);
    if (a<100){
        int i = 1;
        for(i=1;i<=a;i++){
            printf("%d ",i);
        }
    }
}
 //3
 #include <stdio.h>
 int main()
{
      int size_of_int=sizeof(int);
     int size_of_char= sizeof(char);
      int size_of_float=sizeof(float);
    int size_of_double=sizeof(double);
   
    printf("The size of int data type : %d\n",size_of_int );
    printf("The size of char data type : %d\n",size_of_char);
    printf("The size of float data type : %d\n",size_of_float);
    printf("The size of double data type : %d",size_of_double);
   
  return 0;
}
//4
#include<stdio.h>
int main(){
    int a,b;
    float c,d;
    double e,f;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    scanf("%lf%lf",&e,&f);
    printf("%d \n",a+b);
    printf("%f \n",c+d);
    printf("%lf \n",e+f);
}

//5
#include<stdio.h>
int main(){
    int a,b;
    float c,d;
    scanf("%f%f",&c,&d);
    scanf("%d%d",&a,&b);
    printf("%lf \n",c*d);
    printf("%d",a*b);
}
//6
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    printf("%c=%d",a,a);
}
//7
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c = a;
    a=b;
    b = c;
    printf("%d %d",a,b);
}
//8
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d %d",a,b);
}
//9
#include<stdio.h>
int main(){
    int a,s;
    scanf("%d",&a);
    s = a%2;
    if(s==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
}
//10
#include<stdio.h>
int main(){
    int f,c=0;
    scanf("%d",&f);
    while(f!=0){
        f=f/10;
        c += 1;
    }
    printf("%d",c);
}
//11
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<n;i++)
    {
        if (n%i == 0){
            printf("%d, ",i);
        }
        else{
            continue;
        }
    }
    printf("%d",n);
    return 0;
}   
//12
#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    for (int i=2; i<=n ;i++){
        if(n%i==0){
            c=1;
            break;
        }
    }
    if(c==0){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
}  
//13
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i<0){
        printf("Negative Number");
    }
    else if(i==0){
        printf("Number is zero ,neither positive nor negative");
    }
    else{
        printf("Positive Number");
    }
}
//14
#include <stdio.h>
int main() {
    int base, exp;
    int result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %d", result);
    return 0;
}
//15
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i%4==0){
        printf("It is a leap Year");
    }
    else{
        printf("It is not a leap year");
    }
}


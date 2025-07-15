//Given a number 'n', write an algorithm and a code to check if it can be written as sum of first few prime numbers
#include<stdio.h>
int check(int n){
    int s = 0;
    for(int i = 0;i< n ;i++){
        if(n%i==0){
            s += i; 
        }
    }
    if(s==n){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    int n;
    printf("Give value of the number: \n");
    scanf("%d",&n);
    int t = check(n);
    if(t==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
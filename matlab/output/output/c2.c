#include<stdio.h>
int main(){
    int r,a,h,b;
    scanf("%d%d%d%d",&a,&b,&r,&h);
    printf("Area of the circle:%f",r*r*(3.14));
    printf("Area of the rectangle:%d",a*b);
    printf("Area of the square: %d",a*a);
    printf("Area of the triangle: %d",(1.5)*h*b);
}
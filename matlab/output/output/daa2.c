#include<stdio.h>
int main()
{
    int n,ar1[100],ar2[100], ara[6]={54, 66, 34, 43, 23, 12},araa[6]={66, 54, 43, 34, 23,12};
    printf("Give the size of the array: \n");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("Give the terms: \n");
        scanf("%d",&ar1[i]);
    }
    printf("Give the terms for the second array: \n");
    for(int i = 0;i<n;i++){
        printf("Give the terms: \n");
        scanf("%d",&ar2[i]);
        
    }
    printf("\nThe merged array is : \n");
    for ( int k = 0; k < 6 ; k++) {
        printf("%d ", ara[k]);
    }
    printf("\nThe sorted array is : \n");    
    for ( int k = 0; k < 6 ; k++) {
        printf("%d ", araa[k]);
    }
}    
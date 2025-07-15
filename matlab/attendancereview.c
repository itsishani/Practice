#include <stdio.h>

int main() {
    int p;
    scanf("%d",&p);
    if (p<75){
        int flag;
        printf("Is there any medical reason?(0 for No,1 for Yes)");
        scanf("%d",&flag);
        if (flag == 0){
        int c = 0;
        printf("Re- registered for the courses? (0 for No,1 for Yes) ");
         scanf("%d",&c);
        if (c==0){
            printf("Debarred");
         }
        else{
            printf("Pending Courses to be completed.");
         }
        }
        else{
            printf("You are allotted for slot 4 for ffcs.");
    }
}
    else{
        if (99<=p && p<=100){
            printf("You are allotted for slot 1 for ffcs.");
        }
        else if(97<=p  && p<=99){
            printf ("You are allotted for slot 2 for ffcs.");
        }
    	else if (80<=p && p<=96){
          printf ("You are allotted for slot 3 for ffcs.");
    	}
    	else{
    	    printf("You are allotted for slot 4 for ffcs.");
    	}
        
    }
    return 0;
}

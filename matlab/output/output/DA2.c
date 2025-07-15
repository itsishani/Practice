
//ques4
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int n;
//     char pass[500];
//     printf("Give the number of passwords: \n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%s",pass);
//         int s = strlen(pass);
//         if(s%2==0){
//             if(pass[0]==pass[s-1]){
//                 pass[s-1]='-';
//             }
//             else if(pass[0]<pass[s-1]){
//                 pass[s-1]='+';
//             }
//             else{
//                 pass[s-1]='$';
//             }
//             for(int i =0;i<s;i++){
//                 if(i%2==0){
//                     pass[i]='*';
                    
//                 }
//             }
//         }
//         else{
//             int mid = (s-1)/2;
//             if(pass[mid]>pass[s-1]){
//                 char t = pass[mid-1]; 
//                 pass[mid-1]=pass[s-1];
//                 pass[s-1]=t;
                
//             }
//             else if(pass[mid]<pass[s-1]){
//                 char t = pass[mid+1];
//                 pass[mid+1]=pass[0];
//                 pass[0]= t;
                
//             }
//             else{
//                 for(int i =0 ;i<s;i++){
//                     if(i%2==0){
//                     pass[i]='=';
//                     }  
//                 }
//             }
//         }
//     }
//     return 0;
// }


//question1
#include<stdio.h>
#include<string.h>
int condition(int m){
    if(m<180){
        printf("%d - Eligible for level 3\n",m);
    }
    else{
        printf("%d - Eligible for level 4\n",m);
    }
    return 0;
}
int main(){
    int n;
    printf("Give the number of students: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b;
        printf("Give the marks for jee mains and advance \n");
        scanf("%d%d",&a,&b);
        condition(a+b);
    }
    return 0;
}

//question2
#include<stdio.h>
// int cat(int t,int pr){
//     int c = 0, s = t,w = t,result;
//     while(t!=0){
//        t /= 10;
//        c++;
//     }
//     if (c>=4){
//         s = s/1000;
//         int pa = pr*s;
//         result = pa + w;
//     }
//     printf("Premium policy amount is %d \n",result);
//     return 0;
// }
// int main(){
//     int age,loc,gen,amt,health;
//     printf("Is the person healthy?(if yes press 1 or press 0)\n");
//     scanf("%d",&health);
//     printf("Is the person in the age group 25-35 years? (if yes press 1 or press 0)\n");
//     scanf("%d",&age);
//     printf("Is the person male or female?( press 1 for male and 0 for female)\n");
//     scanf("%d",&gen);
//     printf("Is the person living in city?(if yes press 1 or press 0)\n");
//     scanf("%d",&loc);
//      if(health==1&&age==1&&loc==1&&gen==1){
//         int prem = 4;
//         printf("Person should be insured\n");
//         printf("Give the policy amount: \n");
//         scanf("%d",&amt);
//         cat(amt,prem);
//         printf("Policy amount cannot exceed Rs 2 lakhs\n");
//     }
//     else if(health==1&&age==1&&loc==1&&gen==0){
//         int prem = 3;
//         printf("Person should be insured\n");
//         printf("Give the policy amount: \n");
//         scanf("%d",&amt);
//         cat(amt,prem);
//         printf("Policy amount cannot exceed Rs 1 lakh\n");
//     }
//     else if(health==0&&age==1&&loc==0&&gen==1){
//        int prem = 6;
//        printf("Person should be insured\n");
//        printf("Give the policy amount: \n");
//        scanf("%d",&amt);
//        cat(amt,prem);
//        printf("Policy amount cannot exceed Rs 10,000\n"); 
//     }
//     else{
//         printf("Person cannot be insured\n");
//     }
// }

//question3
// #include<stdio.h>
// void mergearray(int a[], int b[], int size)
// {
//     int c[300];
//     for (int i = 0; i < size; i++)
//         c[i] = a[i];
//     for(int j =0;j<size ;j++)
//         c[size+j]=b[j];        
//     for ( int k = 0; k < 2*size ; k++) {
//         printf("%d ", c[k]);
//     }
//     for(int r=0;r<size-1; r++){ 

//         for (int y=r;y<size;y++){
//             if(c[r]<c[y]){
//                 int t=c[r];
//                 c[r]=c[y];
//                 c[y]=t;
//             }
//          }
//     }     
//     printf("\nThe sorted array is : \n");
//     for ( int k = 0; k < 2*size ; k++) {
//         printf("%d ", c[k]);
//     }
// }    
// int main()
// {
//     int n,ar1[100],ar2[100];
//     printf("Give the size of the array: \n");
//     scanf("%d",&n);
//     for(int i = 0;i<n;i++){
//         printf("Give the terms: \n");
//         scanf("%d",&ar1[i]);
//     }
//     printf("Give the terms for the second array: \n");
//     for(int i = 0;i<n;i++){
//         printf("Give the terms: \n");
//         scanf("%d",&ar2[i]);
        
//     }
//     printf("\nThe merged array is : \n");
//     mergearray(ar1, ar2, n);
//     return 0;
// }

//question4
// #include<stdio.h>
// #include<string.h>
// void pass(char p[20]){
//     int l = strlen(p);
// 	if(l%2==0){
// 		if(p[0]==p[l-1]){
// 		    char c='-';
// 		    p[l-1]=c;}
// 		else if(p[0]<p[l-1]){
// 		    char c='+';
// 		    p[l-1]=c;
// 		 }
// 		else{
// 		    char c='$';
// 		    p[l-1]=c;
// 		 }
// 	    for(int i=0;i<l;i++){
// 	        if(i%2!=0){
// 	           char c='*';
// 	           p[i]=c;
// 	        }
// 	    }
// 	    printf("%s",p);
// 	}
	
// 	else{
// 	    char c;
// 	    c = p[(l-1)/2];
// 	    if(c>p[l-1]){
// 	        char t;
// 	        t = p[l-1];
// 	        p[((l-1)/2)-1]=t;
// 	        }
// 	    else if(c<p[l-1]){
// 	        char t;
// 	        t = p[0];
// 	        p[((l-1)/2)+1] = t;
// 	    }
// 	    else if(c==p[l-1]){
// 	        for(int i=0;i<l;i++){
// 	       if(i%2==0){
// 	           char t ='=';
// 	           p[i]=t;
	           
// 	       }
// 	    }
	        
// 	}
// 	 printf("%s",p);   
// 	}
// }
// int main(){
// 	int n;
// 	printf("Give the number of passwords: ");
// 	scanf("%d",&n);
// 	for(int i =0; i<n;i++){
// 		char word[20];
// 		printf("\nGive the password: \n");
// 		scanf("%s",&word);
// 		pass(word);
// 	}
// 	return 0;
// }
//question5
// #include<stdio.h>
// float amount(int a, int b){
//     float s=a + a*b /100;
//     return s;
// }
// void final(int p, int x){
//     float net2 = amount(p,x+5);
//     printf("\nNew net pay: %.2f",net2);
// }
// int main(){
//     int h,payment;
//     printf("Enter gross pay: ");
//     scanf("%d",&payment);
//     if(payment<750)
//         h=3;
//     else if(payment>1000)
//         h=4;
//     printf("\nGross Pay: %.2d",payment);
//     printf("\nHRS given: %.2d",h);
//     float net1=amount(payment,h);
//     printf("\nInitial net pay: %.2f",net1);
//     final(payment,h);
// }
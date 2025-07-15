// #include<stdio.h>
// int main()
// {
//     int k,l;
//     scanf("%d%d",&k,&l);
//     int my[k][l];
//     int i,j ;
//     printf("Enter the numbers\n");
//     for(i=0;i<=k-1;i++){
//         for(j=0;j<=l-1;j++)
//             scanf("%d ",&my[i][j]);
//     }
//     printf("The array is: \n");
//     for(i=0;i<=k-1;i++){
//         for(j=0;j<=l-1;j++){
//             printf("%d ",my[i][j]);
//         }
//         printf("\n"); 
//     }        
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     char str[1000];
//     int i;

//     printf("Enter a string of lowercase English letters : ");
//     fgets(str, sizeof(str), stdin);

//     // step 1 : creating a freq[] array
//     int freq[26] = {0};

//     // step 2: traversing the string
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         // increment character count at the ith position by 1
//         freq[str[i]-'a'] += 1;
//     }

//     // step 3 : traversing the freq[] array to print character
//     printf("The frequency of characters is -\n");
//     for (i = 0; i < 26; i++)
//     {
//         if (freq[i] != 0)
//         {
//             // here, we can obtain characters by adding the ASCII value of 'a'
//             // ASCII(b) = ASCII(a) + 1
//             char char_ = 'a' + i;
//             printf("\t%c = %d\n", char_, freq[i]);
//         }
//     }

//     return 0;
// }
//Write a program that computes and displays the Scrabble score for a word
// #include<stdio.h>
// #include<string.h>
// int find(char w){
//     int p;
//     if(w=='a'|| w == 'e'|| w=='i'|| w=='l'|| w=='n'|| w=='o'|| w=='r'|| w=='s'|| w=='t'|| w=='u'){
//         p =1;
//     }
//     else if(w== 'd'||w== 'g'){
//         p = 2;
//     }
//     else if(w=='b'|| w=='c'|| w=='m'|| w=='p'){
//         p = 3;
//     }
//     else if(w=='f'|| w=='h'|| w=='v'|| w=='w'|| w=='y'){
//         p =4;
//     }
//     else if(w=='k'){
//         p =5;
//     }
//     else if(w=='j'||w=='x'){
//         p =6;
//     }
//     else{
//         p = 7;
//     }
//     return p; 
// }
// int main(){
//     char s[20];
//     int n,t=0;
//     printf("Give the word: \n");
//     scanf("%s",&s);
//     n = strlen(s);
//     for(int i = 0;i<n;i++){
//        int f = find(s[i]);
//        t += f;
//     }
//     printf("%d",t);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int mat[3][3];
//     for(int i=0; i<3;i++){
//         for(int j=0; j<3;j++){
//             printf("Give the number: \n");
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     for(int i=0; i<3;i++){   //just printing the matrix
//         for(int j=0; j<3;j++){
//             printf("%d ",mat[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<3;i++){  //sum of rows
//         int s = 0;
//         for(int j =0;j<3;j++){
//             s += mat[i][j];
//         }
//         printf("Sum of the %d row is:%d \n",i,s);
//     }
//     int s1 =0,s2 =0,s3 = 0;
//     for(int i =0;i<3;i++){ //sum of each column
//         s1 += mat[i][0];
//         s2 += mat[i][1];
//         s3 += mat[i][2];
//     }
//     printf("sum of 1st column is:%d \n",s1);
//     printf("sum of 2nd column is:%d \n",s2);
//     printf("sum of 3rd column is:%d \n",s3);
//     int dig =0; 
//     for(int i=0;i<3;i++){   //sum of diagonal terms 
//         for(int j=0;j<3;j++){
//             if(i==j){
//                 dig += mat[i][j];
//             }
//         }
//     } 
//     printf("The sum of the diagonal terms is: %d",dig);
// }

// #include<stdio.h>
// struct mystruc{
//     char citynm[30];
//     char state[21];
//     int temp[3];
// };

// int main(){
//     struct mystruc s1;
//     struct mystruc s2;
//     printf("Give the citynm: \n");
//     scanf("%s",& s1.citynm);
//     printf("Give the state name: \n");
//     scanf("%s",&s1.state);
//     printf("Give the temperatures: \n");
//     for(int i=0;i<3;i++){
//         scanf("%d",&s1.temp[i]);
//     }
//     printf("Give the citynm: \n");
//     scanf("%s",& s2.citynm);
//     printf("Give the state name: \n");
//     scanf("%s",&s2.state);
//     printf("Give the temperatures: \n");
//     for(int i=0;i<3;i++){
//         scanf("%d",&s2.temp[i]);
//     }
//     int sum1=0,sum2=0;
//     for(int i=0;i<3;i++){
//         sum1 += s1.temp[i];
//     }
//     for(int i=0;i<3;i++){
//         sum2 += s2.temp[i];
//     }
//     float avg = sum1/3;
//     float avg1 =sum2/3;
//     if(avg>avg1){
//         printf("City 1 is more hotter");
//     }
//     else{
//         printf("City 2 is more hotter");
//     }
//

// #include<stdio.h>
// #include<math.h>
// double stddev(int arr[],int n){
//    int sum=0;
//    float avg,sos;
//    double dev;
//    for(int i=0;i<5;i++){
//       sum += arr[i];
//    }
//    avg = sum/n;
//    for(int i=0;i<5;i++){
//       sos += (arr[i]-avg)*(arr[i]-avg); 
//    }
//    dev = sqrt(sos/(n-1));
//    return dev;
// }
// int main(){
//    int arr[5];
//    for(int i=0;i<5;i++){
//       printf("Give the marks of the students: \n");
//       scanf("%d",&arr[i]);
//    }
//    double ans = stddev(arr,5);
//    printf("%lf",ans);
// }

// #include<stdio.h>
// #include<string.h>
// int mat(char str[]){
//    int size = strlen(str);
//    int col = 5;
//    int row = col/size;
//    char matrix[row][col];
//    int ind =0;
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//          matrix[i][j]=str[ind];
//          ind++;
//       }
//    }
//    for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             printf("%c ", matrix[i][j]);
//          }
//          printf("\n");
//    }
//    return 0;
// }
// int main(){
//    char s[100];
//    printf("Give the string: \n");
//    scanf("%s",&s);
   
//    char alph[] = "abcdefghiklmnopqrstuvwxyz";
//    strcat(s,alph);
   
//    mat(s);
// } 

// #include<stdio.h>
// #include<string.h>
// int main(){
//    char word[100];
//    printf("Give the word: \n");
//    scanf("%s",&word);
//    int freq[26] = {0};
//     // step 2: traversing the string
//     for (int i = 0; word[i] != '\0'; i++)
//     {
//         // increment character count at the ith position by 1
//         freq[word[i]-'a'] += 1;
//     }

//     // step 3 : traversing the freq[] array to print character
//     printf("The frequency of characters is -\n");
//     for (int i = 0; i < 26; i++)
//    {
//       if (freq[i] != 0)
//         {
//             // here, we can obtain characters by adding the ASCII value of 'a'
//             // ASCII(b) = ASCII(a) + 1
//             char char_ = 'a' + i;
//             printf("\t%c = %d\n", char_, freq[i]);
//         }         
//    }
// }

// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int p, q,a, b;
//     int one[50][50], two[50][50], res[50][50];
//     printf("Enter the order of first matrix: ");
//     scanf ("%d%d", &p,&q);
//     printf("Enter the order of second  matrix: \n");
//     scanf("%d %d", &a,&b);
//     printf("Give terms for first matrix: \n");
//     for(int m = 0;m<p;m++){
//         for(int n=0;n<q;n++){
//             scanf("%d",&one[m][n]);
//         }
//     }
//     printf("Give terms for second matrix: \n");
//     for(int m = 0;m<a;m++){
//         for(int n=0;n<b;n++){
//             scanf("%d",&two[m][n]);
//         }
//     }
//     for(int t=0;t<p; t++){
//         for(int s =0;s<b;s++){
//             res[t][s]= 0;
//             for(int k=0;k<q;k++){
//                 res[t][s] += one[t][k] * two[k][s];
//             }
//         }
//     }
//     for(int i=0;i<p;i++){
//         for(int j=0;j<b;j++){
//             printf("%d", res[i][j]);
//         }
//     }
//     return 0;
    
// }


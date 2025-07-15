//question 3
// #include<stdio.h>
// #include<string.h>
// #define MAX_TITLE_LENGTH 100
// struct Book{
//     char title[MAX_TITLE_LENGTH];
//     char author[50];
//     char ISBN[13];
//     int pages;
// };
// char* getBookWithMostPages(struct Book* books,int numBooks){
//     int maxPages = 0;
//     char* bookWithTitle = NULL;
//     for(int i= 0;i< numBooks; i++){
//         if(books[i].pages > maxPages){
//             maxPages = books[i].pages;
//             bookWithTitle = books[i].title;
//         }
//     }
//     return bookWithTitle;
// }
// int main(){
//     struct Book books[]={
//         {"Harry Potter", "A1", "ISBN1", 200},
//         {"Hardy brothers", "A2", "ISBN2", 466},
//         {"The Night tales", "A4", "ISBN3", 355},
//         {"Hopes Alive", "A3", "ISBN4", 677}
//     };int numBooks = sizeof(books) / sizeof(struct Book);
//     char* bookWithMostPages = getBookWithMostPages(books, numBooks);
//     if(getBookWithMostPages != NULL){
//         printf("Book with the most pages: %s \n", bookWithMostPages);
//     }else{
//         printf("No books found.\n");
//     }
//     return 0;
// }
//question 4
// #include<stdio.h>
// void print(float cgpa[10]){
//     float *p = cgpa;
//     for(int i=0;i<10;i++){
//         printf("Roll no: %d\n",i+1);
//         printf("CGPA: %.1f\n",cgpa[i]);
//         printf("Reference: %p\n",p);
//         p++;
//     }
// }
// int main(){
//     float cgpa[10];
//     printf("Give the cgpa of the students: \n");
//     for(int i=0;i<10;i++){
//         scanf("%f",&cgpa[i]);
//     }
//     print(cgpa);
//     return 0;
// }   


//question 5
// #include<stdio.h>
// #define MAX_USERS 100
// struct User{
//     int accountNumber;
//     int PIN;
//     float balance;
// };struct User users[MAX_USERS] ={
//     {12345, 1123, 4000.0},
//     {34567, 2234, 2000.0},
// }
// ;int main(){ 
//     int accountNumber, PIN;
//     printf("Enter the account number: ");
//     scanf("%d", &accountNumber);
//     printf("Enter your PIN: ");
//     scanf("%d", &PIN);
//     struct User* currentUser = NULL;
//     for(int i=0;i< MAX_USERS; i++){
//         if(users[i],accountNumber==accountNumber){
//             currentUser = &users[i];
//             break;
//         }
//     }
//     if (currentUser != NULL){
//         if(currentUser->PIN == PIN){
//             float withdrawalAmount;
//             printf("Enter the amount you want to withdraw: ");
//             scanf("%f",&withdrawalAmount);
//             if(withdrawalAmount <= currentUser->balance){
//                 currentUser->balance -= withdrawalAmount;
//                 printf("Withdrawal successful. You have withdrawn %.2f \n",withdrawalAmount);
//                 printf("Current balance: %.2f \n", currentUser->balance);
//             }else{
//                 printf("Insufficient balance. Cannot withdraw. \n");
//             }
//         }else{
//             printf("Incorrent PIN. \n");
//         }
//     }else{
//         printf("Invalid account number. \n");
//     }
//     return 0;
// }
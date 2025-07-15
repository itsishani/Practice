// #include <stdio.h> 
// #include <string.h>
// int isvowel(char ch) {
//     switch (ch) {
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//     case 'A':
//     case 'E':
//     case 'I':
//     case 'O':
//     case 'U':
//         return 1;
//     }
//     return 0;
// }
 
// void question_1(int size, char matrix[size][size]) {
//     // Because we want to ignore the repeated vowels, so we create an array
//     char vowels[size * size];
//     int v = 0;
 
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             if (isvowel(matrix[i][j])) {
//                 int isduplicate = 0;
//                 for (int k = 0; k < v; k++) {
//                     // If the vowel is already in the array, we ignore it and not print it
//                     if (matrix[i][j] == vowels[k]) {
//                         isduplicate = 1;
//                     }
//                 }
//                 if (!isduplicate) {
//                     printf("%c ", matrix[i][j]);
//                     vowels[v] = matrix[i][j];
//                     v++;
//                 }
 
//             }
//         }
//     }
 
// }
 
// void question_2(int size, char matrix[size][size]) {
//     // Boundary elements
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             if ((i == 0 || i == size - 1 || j == 0 || j == size - 1) && isvowel(matrix[i][j])) {
//                 printf("$ ");
 
//             } else {
//                 printf("%c ", matrix[i][j]);
//             }
//         }
//         printf("\n");
//     }
// }


 
// void question_3(int size, char matrix[size][size]) {
//     // What should be the size of all diagonal elements? 4 x 4 would have 4 diagonal elements
//     // So
//     char diag_1[size + 1]; // One extra space for NULL character
//     char diag_2[size + 1];
 
//     // Diagonal 1 (Main diagonal) i = j
//     for (int i = 0; i < size; i++) {
//         diag_1[i] = matrix[i][i];
//     }
//     diag_1[size] = '\0';
 
//     // Diagonal 2 (Secondary diagonal) i + j = size - 1
//     for (int i = 0; i < size; i++) {
//         diag_2[i] = matrix[i][size - 1 - i];
//     }
//     diag_2[size] = '\0';
//     printf("%s\n", diag_1);
//     printf("%s\n", diag_2);
 
//     // Compare equal
//     if (strcmp(diag_1, diag_2) == 0) {
//         printf("Equal\n");
//     } else {
//         printf("Not equal\n");
//     }
// }
 
// void question_4(int size, char matrix[size][size]) {
//     // How to store frequency of characters?
//     // We store it in array of size in which each index represent a character
//     // Each index is actually its ASCII index
 
//     // We create an array of size 256 because ASCII has 256 characters
//     int freq[256] = {
//         0
//     };
 
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             freq[matrix[i][j]]++;
//         }
//     }
 
//     // Print the character with max frequency
//     int max = 0;
//     char max_char;
//     for (int i = 0; i < 256; i++) {
//         if (freq[i] > max) {
//             max = freq[i];
//             max_char = i;
//         }
//     }
//     printf("Max repeated characters: %c\n", max_char, max);
 
// }
 
// int main() {
//     int size;
//     printf("Size: ");
//     scanf("%d", & size);
 
//     char matrix[size][size];
//     printf("characters\n");
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             scanf(" %c", & matrix[i][j]);
//         }
//     }
 
//     // Ask which operation user would like to perform
//     int operation;
//     printf("Question number? ");
//     scanf("%d", & operation);
 
//     switch (operation) {
//     case 1:
//         question_1(size, matrix);
//         break;
//     case 2:
//         question_2(size, matrix);
//         break;
//     case 3:
//         question_3(size, matrix);
//         break;
//     case 4:
//         question_4(size, matrix);
//         break;
//     default:
//         break;
//     }

// }

// #include <stdio.h>
// #include <string.h>

// #define ROWS 5
// #define COLS 5

// void write_word(char matrix[][COLS], char *word, int row, int col, int direction);

// int main()
// {
//     char matrix[ROWS][COLS] = {
//         {'F', 'A', 'B', 'C', 'D'},
//         {'E', 'H', 'I', 'J', 'K'},
//         {'L', 'M', 'N', 'O', 'P'},
//         {'Q', 'R', 'S', 'T', 'U'},
//         {'V', 'W', 'X', 'Y', 'Z'}
//     };
    
//     char word[] = "HELLO";
//     int row = 1, col = 0, direction = 1; // start at position (1,0) going downwards
    
//     write_word(matrix, word, row, col, direction);
    
//     // print the modified matrix
//     for (int i = 0; i < ROWS; i++) {
//         for (int j = 0; j < COLS; j++) {
//             printf("%c ", matrix[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// void write_word(char matrix[][COLS], char *word, int row, int col, int direction)
// {
//     int len = strlen(word);
//     for (int i = 0; i < len; i++) {
//         matrix[row][col] = word[i];
//         if (direction == 1) { // going downwards
//             row++;
//         } else if (direction == -1) { // going upwards
//             row--;
//         } else if (direction == 2) { // going rightwards
//             col++;
//         } else if (direction == -2) { // going leftwards
//             col--;
//         }
//     }
// }


// #include<stdio.h>
// #include<string.h>

// char check(char s){
//     if(s>=65 && s<=90){
//         return(s+32);
//     }
//     else{
//         return(s);
//     }
// }
// int vowel(char ser[]){ 
//     int c=0,q=0;
//     char vv[100];
//     int len = strlen(ser);
//     for(int i=0;i<len;i++){
//         if(ser[i]== 'a' || ser[i]=='e' ||ser[i]== 'o' || ser[i]=='i' || ser[i]=='u'|| 
//         ser[i]== 'A' || ser[i]=='E' ||ser[i]== 'O' || ser[i]=='I' || ser[i]=='U'){
//             printf("%c\n",ser[i]);
//             vv[q]=ser[i];
//             q++;
            
//         }
//     }
//     for(int t=0;vv[t]!='\0';t++){
//         if()
//     }
// }    
// int main(){
//     char naam[100];
//     printf("Give the name:  ");
//     fgets(naam,100,stdin);
//     printf("%s\n",naam);
    
//     for(int i=0;naam[i]!='\0';i++){
//         char new = check(naam[i]);
//         naam[i] = new;
//     }
//     printf("\n%s",naam);
//     vowel(naam);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int is_vow(char c,char vow[]){
//     int l = strlen(vow);
//     for(int i=0;i<l;i++){
//         if(c == vow[i]){
//             return 1;
//         }
//     }
//     return 0;
// }
// int uniq_char(char word[]){
//     int len,c=0;
//     char vow[] = "aeiouAEIOU"; 
//     int visited[256] = {0};
//     len = strlen(word);
//     for(int i=0;i<len;i++){
//         if(is_vow(word[i],vow) && !visited[word[i]]){
//             visited[word[i]] = 1;
//             c++;
//             printf("%c",word[i]);
//         }
//     }
//     printf("The total number of vowels is: %d",c);
//     return 0;
// }
// char check(char r){
//     if(r>=65 && r<=90){
//         return(r + 32);
//     }
//     else{
//         return(r);
//     }
// }
// int main(){
//     char word[100];
//     printf("Give the word: ");
//     scanf("%s",&word);
//     int l =strlen(word);
//     for(int i=0; i<l;i++){
//         char new = check(word[i]);
//         word[i] = new;
//     }
//     uniq_char(word);
// }



// #include <stdio.h>
// #include <string.h>

// int is_vowel(char c, char vowels[]) {
//     int i, length;

//     length = strlen(vowels);

//     for (i = 0; i < length; i++) {
//         if (c == vowels[i]) {
//             return 1;
//         }
//     }

//     return 0;
// }

// int count_unique_vowels(char word[]) {
//     int i, length, count;
//     char vowels[] = "aeiouAEIOU";
//     int visited[256] = {0};

//     length = strlen(word);
//     count = 0;

//     for (i = 0; i < length; i++) {
//         if (is_vowel(word[i], vowels) && !visited[word[i]]) {
//             visited[word[i]] = 1;
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     char word[100];

//     printf("Enter a word: ");
//     scanf("%s", word);
//     printf("Number of unique vowels in the word: %d\n", count_unique_vowels(word));
//     return 0;
// }

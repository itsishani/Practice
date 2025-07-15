//m4
// #include <stdio.h>
// int main(){
//     int s,sum=0;
//     for(int i=0; i<5;i++){
//         scanf("%d",&s);
//         if (s%2!=0){
//             sum += s;
//         }
//     }
//     printf("%d",sum);
// }

//m3
#include <stdio.h>
#include<string.h>
int ecount(char sentence){
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}
int main(){
    char sentence[500];
    fgets(sentence,sizeof(sentence),stdin);
    ecount(sentence);
    return 0;
}
//m2
#include<stdio.h>
#include<string.h>
char sentence[500];
fgets(sentence,sizeof)
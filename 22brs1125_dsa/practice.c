#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;

void push(int data){
    if(top == MAX -1){
        printf("Stack overflow");
        return ;
    }
    top++;
    stack_arr[top] = data;
}
void pop(){
    stack_arr[top] = NULL;
    top--;
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    for(int i=0;i<MAX;i++){
        printf("%d\t",stack_arr[i]);
    }
    pop();
    push(6);
    for(int i=0;i<MAX;i++){
        printf("%d\t",stack_arr[i]);
    }
}

struct node{
    int data;
    struct nod *link;
}*top = NULL;

void push(int data){
    struct node* newnode;
    newnode = malloc(sizeof(newnode));
    if(newnode == NULL){
        printf("Stack overflow \n");
        return;
    }
    newnode->data = data;
    newnode->link = NULL;
    newnode->link = top;
    top = newnode;
}

void print(){
    struct node* temp;
    temp = top;
    while(temp){
        printf("%d  ",temp->data);
        temp = temp->link;
    }
}
int main(){
    push(54);
    push(33);
    push(23);
    print();
    push(34);
    print();
}
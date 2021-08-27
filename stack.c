
#include<stdio.h>
#include "stack.h"
#include<limits.h>

struct node {
    int data;
    struct node *next;

};
struct node *top=NULL;

void Push(int x){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}

void traverse(){
    struct node *temp;
    temp=top;
    if (top==0)
        printf("stack is empty\n");
    else{
        while(temp!=0){
            printf("stack is empty");
            temp=temp->data;
        }
    }
}

void Peek(){
    if (top==0)
        printf("stack is empty");
    else{
        printf("Top element is %d",top->data);
    }
}

void Pop(){
    struct node *newnode;
    int temp=top;
    if (top==0)
        printf("stack is empty");
    else{
        printf("%d",top->data);
        top=top->next;
        free(temp);
        temp=NULL;
    }
}

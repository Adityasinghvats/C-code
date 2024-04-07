#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next; 
};
void inTheLinkedList(struct Node *ptr){
    printf("Elements :%d",ptr->data);
    ptr -> ptr->next;
}

int main(){
    struct Node* head,first,second,third,fourth,fifth;
    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth= (struct Node*)malloc(sizeof(struct Node));
    fifth = (struct Node*)malloc(sizeof(struct Node));

    // Connecting rhe nodes and giving data
    head -> data = 4;
    head -> next = first;

    first -> data = 7;
    first -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 14;
    third -> next = fourth;

    fourth -> data = 44;
    fourth -> next = fifth;

    fifth -> data = 4;
    head -> next = Null;

    inTheLinkedList(head);
}
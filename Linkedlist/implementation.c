// #include<stdio.h>
// #include<stdlib.h>
// void main(){
//     typedef struct node{
//         int data;
//         struct node *next;
//     }node;
//     node *head,*newnode,*temp;/**head to store adress of first node and *new node will store address of next node*/
//     head = NULL;
//     int choice;
//     printf("Do you want to continue press(0 or 1)");
//     scanf("%d",&choice);
//     if(choice==1){
//     head = (node*) malloc(sizeof(node));
//     printf("Enter data");
//     scanf("%d",&newnode->data);
//     newnode->next=NULL;
//     if(head==0)
//     {head = temp = newnode; }
//     else{
//         temp->next=newnode;
//         temp = newnode;
//     }
//     }
//     while (temp!=NULL)
//     {
//         printf("%d",temp->data);
//         temp = temp->next;
//     }

//     getchar();
// }
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;
void inTheLinkedList(Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements :%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    Node *head, *first, *second, *third, *fourth, *fifth;
    head = (Node*)malloc(sizeof(Node));
    first = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));
    fourth = (Node*)malloc(sizeof(Node));
    fifth = (Node*)malloc(sizeof(Node));

    // Connecting rhe nodes and giving data
    head->data = 4;
    head->next = first;

    first->data = 7;
    first->next = second;

    second->data = 11;
    second->next = third;

    third->data = 14;
    third->next = fourth;

    fourth->data = 44;
    fourth->next = fifth;

    fifth->data = 89;
    fifth->next = NULL;

    inTheLinkedList(head);
    return 0;
}
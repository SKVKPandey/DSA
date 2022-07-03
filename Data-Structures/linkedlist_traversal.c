/* Linked List Creation and Traversal In C

Author: Shashank Kashyap Vijay Kumar Pandey
Date Of Creation: July 3, 2022 

MIT LICENCE */

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr){
    while (ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    //Allocating memory to Nodes of Linked list in the heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    //Link first and second nodes
    head->data = 25;
    head->next = second;

    //Link second and third nodes
    second->data = 29;
    second->next = third;

    //Terminate the list at the third node
    third->data = 37;
    third->next = NULL;

    //Traversal
    traversal(head);

    return 0;
}

// References: CodeWithHarry DSA Course
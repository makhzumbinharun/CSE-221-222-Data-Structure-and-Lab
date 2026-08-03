#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

// Append

void append(int value){
    Node *newNode, *temp;
    
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if(head == NULL){
        head = newNode;
        return;
    }
    
    temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = newNode;
}

// Traverse

void traverse(){
    Node *temp = head;
    
    if(temp == NULL){
        printf("List is empty!\n");
        return;
    }
    
    printf("== Linked List ==\n");
    while(temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
        
    }
    printf("NULL\n");
}

// Insert

void insert(int val, int pos){
    Node *newwNode, *temp;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    
    if(position == 1){
        newNode->next = head;
        head = newNode;
        return;
    }
    temp = head;
    
    for(int i = 1; i < position - 1 && temp != NULL; i++){
        temp = temp->next;
    }
    
    if(temp == NULL){
        printf("Invalid Position!\n");
        free(newNode);
        return;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
}




int main() {
    int c, val;
    scanf("%d", &c);
    
    printf("1. Append\n");
    
    while(scanf("%d", &val) == 1){
        append(val);
        
    }
    traverse();
    
    /*switch(c){
        
        case 1: 
    }*/

    return 0;
}


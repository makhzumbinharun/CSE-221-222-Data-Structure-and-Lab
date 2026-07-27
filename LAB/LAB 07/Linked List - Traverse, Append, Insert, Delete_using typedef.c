#include <stdio.h>
#include <stdlib.h>
// Node ure

typedef  struct Node{
    int data;
    struct Node *next;
}Node;

Node *head = NULL;


// Traverse

void traverse(){
    Node *temp = head;
    
    if(head == NULL){
        printf("\nList is Empty!\n");
        return;
    }
    printf("\nLinked List: ");
    
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


// Append


void append(int value){
    Node *newNode, *temp;
    
    newNode = (Node *)malloc(sizeof( Node));
    
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        return;
    }
    
    temp = head;
    
    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
}


// Insert

void insert(int value, int position){
    Node *newNode, *temp;
    newNode = ( Node *)malloc(sizeof( Node));
    newNode->data = value;
    
    if(position == 1){
        newNode->next = head;
        head = newNode;
        return;
    }
    
    temp = head;
    
    for(int i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;
    
    if(temp == NULL){
        printf("Invalid Position!\n");
        free(newNode);
        return;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    
}


// Delete

void deleteNode(int position){
    Node *temp, *prev;
    
    if(head == NULL){
        printf("List is Empty!\n");
        return;
    }
    
    temp = head;
    
    if(position == 1){
        head = head->next;
        free(temp);
        return;
    }
    
    prev = NULL;
    
    for(int i = 1; i < position && temp != NULL; i++){
        prev = temp;
        temp = temp->next;
    }
    
    if(temp == NULL){
        printf("Invalid Position!\n");
        return;
    }
    
    prev->next = temp->next;
    free(temp);
    
}


// Searching

void search(int value){
    Node *temp = head;
    int position = 1;

    if(head == NULL){
        printf("List is Empty!\n");
        return;
    }

    while(temp != NULL){
        if(temp->data == value){
            printf("Value %d found at position %d.\n", value, position);
            return;
        }
        temp = temp->next;
        position++;
    }

    printf("Value %d not found.\n", value);
}

int main(){
    
    int choice, value, position;
    
    while(1){
        printf("\n===== LINKED LIST MENU =====\n");
        printf("1. Append\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Traverse\n");
        printf("5. Search\n");
        printf("0. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        
        
        switch(choice){
            
            case 1:
                printf("Enter Value: ");
                scanf("%d", &value);
                append(value);
                break;
            
            
            case 2:
                printf("Enter Value: ");
                scanf("%d", &value);
                printf("Enter Position: ");
                scanf("%d", &position);
                insert(value, position);
                break;
            
            
            case 3:
                printf("Enter Position to Delete: ");
                scanf("%d", &position);
                deleteNode(position);
                break;
            
            
            case 4:
                traverse();
                break;

            case 5:
                printf("Enter Value: ");
                scanf("%d", &value);
                search(value);
                break;
            
            case 0:
                printf("Program Ended.\n");
                exit(0);
            
            default:
                printf("Invalid Choice!\n");
            
            
        }
    }
    
    return 0;
}

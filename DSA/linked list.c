//create and implement all the linked list function in c 
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *head = NULL;

struct Node* createnode(int data){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

struct Node* insertstart(int data){
    struct Node*newnode=createnode(data);
    if(head==NULL){
        head=newnode;
        return head;

    }
    newnode->next=head;
    head=newnode;
    return head;

    

}

struct Node* insertend(int data){
    struct Node*newnode=createnode(data);
    if(head=NULL){
        head=newnode;
        return head;
    }
    struct Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}



struct Node* print(int data){
    struct Node*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    return head;

    
    
}


int main(){
    return 0;

}
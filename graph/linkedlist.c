#include<stdlib.h>
#include<stdio.h>

struct linkedlist{
    int val;
    struct linkedlist * next;
};

typedef struct linkedlist linkedlist;

void insert(linkedlist** headref,int value){
    linkedlist *ptrref,*temp = (linkedlist*)malloc(sizeof(linkedlist));
    temp->val= value;
    temp->next=NULL;
    if(*headref==NULL){
        *headref=temp;
    }
    else
    {
        ptrref=*headref;
        while (ptrref->next!=NULL)
        {
            ptrref=ptrref->next;
        }
        ptrref->next=temp;
        
    }
    
}

void printList(linkedlist **headref){
    linkedlist *temp;
    temp=*headref;
    while (temp->next!=NULL)
    {
        printf(" %d ->",temp->val);
        temp=temp->next;
    }
}

linkedlist *addList(linkedlist **headref1,linkedlist **headref2){
    int carry=0,maxLen=3;
    linkedlist *ptrref1,*ptrref2;
    linkedlist *sum= (linkedlist*)malloc(maxLen*sizeof(linkedlist));
    ptrref1=*headref1;
    ptrref2=*headref2;
    //if the maxLen of both strings are same 
    for (int i = 0; i < maxLen; i++){
        
    }
    
}

int main(void){
    linkedlist *head1=NULL,*head2=NULL;
    // for (int i = 0; i <= 30; i++)
    // {
    //     insert(&head,i);
    // }
    insert(&head1,3);
    insert(&head1,4);
    insert(&head1,5);
    insert(&head2,5);
    insert(&head2,6);
    insert(&head2,7);
    printList(&head1);
    printList(&head2);
    return 0;
}
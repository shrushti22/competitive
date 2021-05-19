#include<bits/stdc++.h>
using namespace std;


struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; 

Node* merge(Node *low1,Node *low2){
    Node *head=NULL;
    Node *pre=NULL;
    while(low1!=NULL && low2!=NULL){
        if(low1->data<=low2->data){
            if(head==NULL){
                head = pre = low1;
                pre->prev = NULL;
                low1 = low1->next;
            }else{
                pre->next = low1;
                low1->prev = pre;
                low1=low1->next;
                pre=pre->next;
            }
        }else{
            if(head == NULL){
                head = pre = low2;
                pre->prev = NULL;
                low2 = low2->next;
            }else{
                pre->next = low2;
                low2->prev = pre;
                low2 = low2->next;
                pre = pre->next;
            }
        }
    }
    
    if(low1!=NULL){
        pre->next = low1;
        low1->prev = pre;
        low1=low1->next;
        pre=pre->next;
    }
    
    if(low2!=NULL){
        pre->next = low2;
        low2->prev = pre;
        low2 = low2->next;
        pre = pre->next;
    }
    
    return head;
}

void mergesort(Node **headref){
    if(*headref==NULL || (*headref)->next==NULL)
        return;
    
    Node *slow=*headref,*fast=*headref;
    int count = 0;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        count++;
    }
    
    if(count%2==0){
        fast = fast->next;
    }
    Node *temp = slow->next;
    slow->next = NULL;
    temp->prev = NULL;
    mergesort(&(*headref));
    mergesort(&temp);
    *headref = merge(*headref,temp);
}

//Function to sort the given doubly linked list using Merge Sort.
struct Node *sortDoubly(struct Node *head)
{
	// Your code here
	mergesort(&head);
	return head;
}

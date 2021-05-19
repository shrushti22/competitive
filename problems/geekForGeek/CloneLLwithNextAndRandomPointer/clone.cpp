#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};

Node *copyList(Node *head) {
    // Your code here
    Node *curr = head,*temp;
    while(curr!=NULL){
        temp = new Node(curr->data);
        temp->next = curr->next;
        curr->next = temp;
        curr = temp->next;
    }
    
    curr=head;
    while(curr!=NULL){
        curr->next->arb = (curr->arb != NULL)? curr->arb->next : NULL;
        curr = curr->next->next;
    }
    
    Node *headcopy = head->next;
    Node *curr1 = head,*curr2 = headcopy;
    while(curr1!=NULL && curr2!=NULL){
        curr1->next = curr2->next;
        curr2->next = (curr2->next!=NULL) ? curr2->next->next : NULL;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    
    return headcopy;
}
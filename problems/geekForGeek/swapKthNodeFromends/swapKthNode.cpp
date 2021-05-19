#include <bits/stdc++.h>
using namespace std;

struct Node  {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node * swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    Node *slow,*fast;
    slow=head;
    fast=head;
    int count=0;
    int n =0;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        count++;
    }
    if(fast == NULL){
        n = (2*count);
    }else{
        n = (2*count)+1;
        count++;
    }
    if(K>n){
        return head;
    }
    if(count<K){
        K=K - (K-count);
    }
    Node *prev=NULL,*curr=head,*next=NULL,*temp,*temp1;
    n=n-K;
    count = 0;
    while(curr!=NULL && count<K){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    temp = curr;
    while(count<n-1){
        curr = curr->next;
        count++;
    }
    temp1 = curr;
    curr= curr->next;
    temp1->next = prev;
    prev = temp;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}
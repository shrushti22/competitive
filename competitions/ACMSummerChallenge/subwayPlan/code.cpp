#include <bits/stdc++.h>
using namespace std;

struct Node {
    long long int data;
    struct Node* next;
    struct Node* prev;
    Node(long long int t){
        data = t;
        next = prev = NULL;
    }
};



Node* case1(Node *curr){
    int l;
    cin>>l;
    for(int i=0;i<l;i++){
        curr = curr->prev;
    }
    return curr;
}

Node* case2(Node *curr){
    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        curr = curr->next;
    }
    return curr;
}

Node* case3(Node* curr){
    long long int d1,d2;
    cin>>d1>>d2;

    Node *temp = new Node(d1);
    temp->next = curr->next;
    curr->next = temp;
    temp->next->prev = temp;
    temp->prev = curr;

    temp->next->data = d2;

    return curr;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    
    Node *head = NULL;
    Node *temp,*pre=NULL;
    long long int t;
    for(int i=0;i<n;i++){
        cin>>t;
        temp = new Node(t);
        temp->prev = pre;
        if(head==NULL){
            head = temp;
            pre = temp;
        }else{
            pre->next = temp;
            pre = temp;
        }    
    }

    int c;
    Node *curr = head; 
    for(int i=0;i<q;i++){
        cin>>c;
        if(c==1){
            curr = case1(curr);
        }else if(c==2){
            curr = case2(curr);
        }else if(c==3){
            curr = case3(curr);
        }
    }

    curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    

    return 0;
}
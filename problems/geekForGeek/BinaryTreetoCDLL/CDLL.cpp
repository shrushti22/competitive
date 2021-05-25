#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 

Node *prev = NULL;
Node *bTreeToCDLL(Node *root, Node *&prev);
//Function to convert binary tree into circular doubly linked list.
Node *bTreeToCList(Node *root, Node *&prev){
        if(root==NULL)
            return NULL;
        Node *head = bTreeToCList(root->left, prev);
        Node *temp;
        if(prev==NULL){
            head = root;
            temp = root->right;
            head->left = root;
            head->right = root;
        }else{
            root->left = prev;
            temp = root->right;
            root->right = prev->right;
            prev->right->left = root;
            prev->right = root;
            
        }
        prev = root;
        bTreeToCList(temp, prev);
        return head;
        
}

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
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root, Node *&prev)
    {
        // your code here
        if(root==NULL)
            return NULL;
        
        Node *head = bToDLL(root->left, prev);
        if(prev==NULL){
            head = root;
        }else{
            root->left=prev;
            prev->right=root;
        }
        prev = root;
        if(root->right!=NULL)
        bToDLL(root->right, prev);
        return head;
    }
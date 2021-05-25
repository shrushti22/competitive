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

bool isMirror(Node* r1,Node* r2){
    if(r1==NULL && r2==NULL)
        return true;
    else if(r1!=NULL && r2!=NULL)
        return isMirror(r1->left,r2->right) && isMirror(r1->right,r2->left);
    else
        return false;
}

//Function to check whether a binary tree is foldable or not.
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root==NULL)
        return true;
    else
        return isMirror(root->left, root->right);
}


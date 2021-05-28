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

void diffnodes(Node* root,int m,int &a){
     
     if(root==NULL){
         return;
     }
     if(root->left!=NULL){
         a = max(a, m - root->left->data);
         diffnodes(root->left, max(m, root->left->data), a);
     }
     if(root->right!=NULL){
         a = max(a, m - root->right->data);
         diffnodes(root->right, max(m, root->right->data), a);
     }
     return;
 }

//Function to return the maximum difference between any node and its ancestor.
int maxDiff(Node* root)
{
    // Your code here
    if(root==NULL)
        return 0;
    
    int ans = INT_MIN; 
    diffnodes(root, root->data, ans);
    return ans;
}

#include<bits/stdc++.h>

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

int height(struct Node* node){
        // code here 
        if(node==NULL){
            return 0;
        }
        return 1 + max(height(node->left), height(node->right));
    }
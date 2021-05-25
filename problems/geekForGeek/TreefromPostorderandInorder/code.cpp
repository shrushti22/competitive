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

Node *build(int in[], int post[], int is, int ie, int &posindex){
    if(is>ie){
        return NULL;
    }
    if(posindex==-1)
        return NULL;
    Node *root = new Node(post[posindex]);
    posindex--;
    
    int i=is;
    while(i<=ie){
        if(in[i]==root->data)
            break;
        i++;
    }
    
    root->right = build(in, post, i+1, ie, posindex);
    root->left = build( in, post, is, i-1, posindex);
    return root;
}
//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    int posindex = n-1;
    return build(in,post,0,n-1,posindex);
}

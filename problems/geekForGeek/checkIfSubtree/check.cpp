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


void inorder(Node *root, vector<int> &v){
        if(root==NULL){
            v.push_back(-1);
            return;
        }
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    void preorder(Node *root, vector<int> &v){
       if(root==NULL){
            v.push_back(-1);
            return;
        }
        v.push_back(root->data);
        preorder(root->left,v);
        preorder(root->right,v);
    }
    //Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S) 
    {
        // Your code here
        vector<int> inT,inS;
        inorder(T, inT);
        inorder(S,inS);
        auto i = search(inT.begin(), inT.end(), inS.begin(), inS.end());
        if(i!=inT.end()){
            inT.clear();
            inS.clear();
            preorder(T,inT);
            preorder(S,inS);
            auto i = search(inT.begin(), inT.end(), inS.begin(), inS.end());
            if(i!=inT.end()){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
        
    }
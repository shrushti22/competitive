#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x){
        data = x;
        left = right = NULL;
    }
};

void convert(Node *head, TreeNode *&root) {
    // Your code here
    if(head==NULL)
        root = NULL;
    queue<TreeNode*> q;
    TreeNode *temp= new TreeNode(head->data);
    root = temp;
    q.push(temp);
    Node *curr = head;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        if(curr!=NULL){
            curr = curr->next;
            if(curr!=NULL){
                TreeNode *lchild = new TreeNode(curr->data);
                temp->left = lchild;
                q.push(lchild);
                curr = curr->next;
                if(curr!=NULL){
                   TreeNode *rchild = new TreeNode(curr->data);
                    temp->right = rchild;
                    q.push(rchild); 
                }
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

 struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  
};

void connect(Node *root)
    {
       // Your Code Here
       if(root==NULL)
            return;
       queue<Node*> q;
       q.push(root);
       Node *temp;
       while(!q.empty()){
            int count = q.size();
            for(int i=0;i<count;i++){
                temp = q.front();
                q.pop();
                if(i==count-1){
                   temp->nextRight=NULL;
                }else{
                   temp->nextRight = q.front();
                }
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
               
           }
       }
    }
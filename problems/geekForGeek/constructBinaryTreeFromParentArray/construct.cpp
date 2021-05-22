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

Node *createTree(int parent[], int N)
{
    unordered_map<int, Node*> map;
    
    Node *head;
    Node *temp;
    int p;
    for(int i = 0;i<N;i++){
        map[i] = new Node(i);
    }
    for(int i=0;i<N;i++){
        p = parent[i];
        if(p==-1){
            head = map[i];
        }else{
            if(map[p]->left==NULL){
                map[p]->left = map[i];
            }else{
                map[p]->right = map[i];
            }
        }
    }
    
    return head;
}
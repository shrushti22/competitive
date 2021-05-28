#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

int countSubtree(Node *root,int x, int &count){
    if(root==NULL){
        return 0;
    }
    
    int lsum = countSubtree(root->left, x, count);
    int rsum = countSubtree(root->right, x,count);
    
    if(lsum+rsum+root->data == x){
        count++;
    }
    
    return lsum+rsum+root->data;
}

int countSubtreesWithSumX(Node* root, int X)
{
	if(root==NULL){
	    return 0;
	}
	int count =0;
	int s = countSubtree(root, X, count);
	return count;
}
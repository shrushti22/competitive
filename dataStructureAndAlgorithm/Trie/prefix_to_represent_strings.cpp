#include<bits/stdc++.h>
using namespace std;
#define charSet 256 

struct TrieNode{
	int freq;
	struct TrieNode *child[charSet];
	TrieNode(){
		freq = 1;
		for(int i=0;i<charSet;i++){
			child[i] = NULL;
		}
	}
	TrieNode(int i){
		freq = i;
		for(int i=0;i<charSet;i++){
			child[i] = NULL;
		}
	}
};

TrieNode* createTrie(int n, vector<string> arr){
	TrieNode *root = new TrieNode(0);
	TrieNode *temp = root;
	for(int i=0;i<n;i++){
		temp = root;
		for(int j=0;j<arr[i].length();j++){
			if(temp->child[arr[i][j]]==NULL){
				temp->child[arr[i][j]] = new TrieNode();
			}else{
				temp->child[arr[i][j]]->freq++;
			}
			temp = temp->child[arr[i][j]];
		}
	}
	return root;
}

void findPrefixes(int n, vector<string> arr, TrieNode *root){
	
	for(int i=0;i<n;i++){
		string curr = arr[i];
		TrieNode *temp = root;
		string prefix = "";
		for(int j=0;j<curr.length();j++){
			if(temp->child[curr[j]]->freq==1){
				prefix += curr[j];
				break; 
			}else{
				prefix += curr[j];
			}
            temp = temp->child[curr[j]];
		}
		cout<<prefix<<"\n";
	}
}

void getPrefixes(int n, vector<string> arr){
	
	TrieNode *root = createTrie(n, arr);
	
	findPrefixes(n, arr, root);
}


int main(){
	int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    getPrefixes(n, arr);
    return 0;
}
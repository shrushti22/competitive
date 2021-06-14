#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
    Node(int t){
        data = t;
        next = prev = NULL;
    }
};

void deleteNode(struct Node** head_ref, struct Node* del)
{
    
    if (*head_ref == NULL || del == NULL)
        return;
 
    /* If node to be deleted is head node */
    if (*head_ref == del)
        *head_ref = del->prev;
 
    /* Change next only if node to be deleted is NOT
       the last node */
    if (del->next != NULL)
        del->next->prev = del->prev;
 
    /* Change prev only if node to be deleted is NOT
       the first node */
    if (del->prev != NULL)
        del->prev->next = del->next;
 
    /* Finally, free the memory occupied by del*/
    free(del);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    Node *head = NULL;
    Node *temp;
    int t;

    for(int i=0;i<n;i++){
        cin>>t;
        temp = new Node(t);
        temp->prev = head;
        if(head==NULL){
            head = temp;
        }else{
            head->next = temp;
            head = temp;
        }    
    }
    

    int cycle =0;
    int flag = 0;
    while(1){
        Node *curr = head;
        while(curr->prev!=NULL){
            if(curr->data < curr->prev->data){
                flag = 1;
                temp = curr->prev;
                deleteNode(&head,curr);
                curr = temp;
            }else{
                curr = curr->prev;
            }
        }
        if(flag==1){
            flag =0;
            cycle++;
        }else{
            break;
        }
    }

    cout<<cycle;
    return 0;

}
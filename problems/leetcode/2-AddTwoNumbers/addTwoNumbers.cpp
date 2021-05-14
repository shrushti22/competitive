#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans= new ListNode();
        int rem =0;
        int s =0;
        s= l1->val + l2->val;
        rem = int(s/10);
        ans->val = s%10;
        l1 = l1->next;
        l2 = l2->next;
        ListNode *curr,*temp;
        curr = ans;
        while(l1!=NULL && l2!=NULL){
            s = l1->val + l2->val + rem;
            rem = int(s/10);
            temp = new ListNode(s%10);
            curr->next = temp;
            curr = curr->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL){
            s = l1->val + rem;
            rem = int(s/10);
            temp = new ListNode(s%10);
            curr->next = temp;
            curr = curr->next;
            l1 = l1->next;
        }
        
        while(l2!=NULL){
            s = l2->val + rem;
            rem = int(s/10);
            temp = new ListNode(s%10);
            curr->next = temp;
            curr = curr->next;
            l2 = l2->next;
        }
        
        if(rem!=0){
            temp = new ListNode(rem);
            curr->next = temp;
            curr = curr->next; 
        }
        return ans;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

// floyd's detection algorithm
bool isLoop(Node* head)
{
    Node *slow = head, *fast = head;

    while (fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }
}

// loop removal
Node* removeLoop(Node* head)
{
    Node *slow = head, *fast = head;

    while (fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }

    slow = head;

    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
    return head;
}

int main()
{
    // create linked list 10->12->15->20->25
	Node *head=new Node(10);
	head->next=new Node(12);
	head->next->next=new Node(15);
	head->next->next->next=new Node(20);
	head->next->next->next->next=new Node(25);

	// connect node(25) with node(12)
	head->next->next->next->next->next = head->next;
	if (isLoop(head))
        cout << "The given linked list contains loop";
    else
        cout << "the given linked list do not contain loop";

    // remove loop
    head = removeLoop(head);
	return 0;
}

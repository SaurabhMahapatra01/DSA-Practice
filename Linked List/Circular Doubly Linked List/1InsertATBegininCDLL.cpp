#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node *prev;
};


Node *AddValue(int data)
{
	Node *temp = new Node;
	temp->prev = temp;
	temp->data = data;
	temp->next = temp;
	return temp;
}

Node *insertBegin(Node *head, int data)
{
	Node *value = AddValue(data);
	if(head == NULL){
		return value;
	}
	else{
       Node *temp = head->next;

       value->prev = head;
       value->next = temp;
       temp->prev  = value;
       head->next  = value;
       return head;
	}
}

void print(Node *head)
{
	if(head == NULL){
		return;
	}
	else{
		Node *curr = head->next;
		do{
			cout<<curr->data<<" ";
            curr = curr->next;
		}
		while(curr!= head->next);
	}
}

int main()
{

	Node *head = NULL;
	head = AddValue(11);
	head = insertBegin(head, 10);
	print(head);



	return 0;
}
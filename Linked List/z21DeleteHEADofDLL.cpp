// Complexities:
// Time = O(1)
// Space = O(1

#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node *prev;
	Node(void )
	{
		int y;
		cin>>y;
		data = y;
		next = NULL;
		prev = NULL;
	}
};

void print(Node *head)
{
	Node *current = head;
	while(current != NULL)
	{
		cout<<current->data<<"=>";
		current = current -> next;
	}
	cout<<"NULL"<<endl;
}

Node *deleteHead(Node *head)
{
	if(head == NULL){
		return NULL;
	}
	if(head->next == NULL){
		delete head;
		return NULL;
	}
	else{
		Node *temp = head;
		head = head ->next;
		head->prev = NULL;
		delete temp;
		return head;
    }
}

int main()
{
	Node *head = new Node();
	Node *temp1 = new Node();
	Node *temp2 = new Node();
	Node *temp3 = new Node();
	head ->  next = temp1;
	temp1-> prev = head;
	temp1->next = temp2;
	temp2->prev = temp1;
	temp2->next = temp3;
	temp3->prev = temp2;
	print(head);
	head = deleteHead(head);
	print(head);

	return 0;
}
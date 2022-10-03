#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data; //DATA part of Node
	Node *next;  //Next Part of Node that store address
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

Node *InsertEnd(Node *head, int x)
{
	Node *temp = new Node(x);
	if(head == NULL)
		return temp;
	Node *Current = head;
	while(Current ->next != NULL)
	{
      Current = Current ->next;
	}
	Current->next = temp;
	return head;
}

void Print(Node *head)
{
	Node *Current = head;
	while(Current != NULL)
	{
		cout<<Current->data<<"==>";
        Current = Current->next;
	}
	cout<<"NULL"<<endl;
}

Node *DeleteHead(Node *head)
{
	if(head==NULL){
		return NULL;
	}
	else{
		Node *temp = head->next;
		delete(head);
		return temp;
	}
}
int main()
{
	// Node *head = NULL;
	Node *head = new Node(2);
	head->next = new Node(3);
	head->next->next = new Node(4);
	head = InsertEnd(head, 6);
	head = InsertEnd(head, 8);
	Print(head);
	head = DeleteHead(head);
	Print(head);

	return 0;
}



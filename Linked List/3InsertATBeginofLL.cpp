#include<bits/stdc++.h>
using namespace std;
 struct Node
 {
 	int data; //DATA part of Node
	Node *next;  //Next Part of Node that store address
 	Node(int x)
 	{
 		data = x;
 		next= NULL;
 	}
};

Node *InsertBegin(Node *head, int x)
{
	Node *temp = new Node(x);
	temp ->next = head;
	return temp;
}

void Print(Node * head)
{
	Node *Current = head;
	while(Current != NULL)
	{
		cout<<Current->data<<" ";
		Current = Current->next;
	}
}
 

int main()
{
  // Node *head = NULL;
  Node *head = new Node(10);
  head->next = new Node(11);
  head->next->next = new Node(12);

  head = InsertBegin(head,9);
  head = InsertBegin(head,8);

  Print(head);
	return 0;
}

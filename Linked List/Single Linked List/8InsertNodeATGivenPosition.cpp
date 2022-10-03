#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

Node *Take_Input()
{
	int data;
	cin>>data;

	Node *head = NULL;
	Node *tail = NULL;

	while(data != -1)
	{
	  Node *newNode = new Node(data);
      if(head == NULL){
      	head = newNode;
      	tail = newNode; 
      }
      else{
      	tail->next = newNode;
      	tail = tail->next;
      }
      cin>>data;
	}
	return head;
}

Node *Insertion(Node *head, int position, int data)
{
	Node *newNode = new Node(data);
	int count = 0;
	Node *temp = head;

	if(position == 0){
		newNode->next = head;
		head = newNode;
		return head;
	}

	while(temp != NULL  && count < position -1)
	{
      temp = temp->next;
      count++;
	}
	if(temp != NULL)
	{
		Node *a = temp->next;
		temp ->next = newNode;
		newNode -> next = a;
	}
   return head;
}

void print(Node *head)
{
	Node *Curr = head;
	while(Curr != NULL)
	{
		cout<<Curr->data<<"==>";
		Curr = Curr->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	Node *head = Take_Input();
	print(head);
    int pos, data;
    cin>>pos>>data;
    head = Insertion(head, pos, data);
    print(head);
	return 0;
}
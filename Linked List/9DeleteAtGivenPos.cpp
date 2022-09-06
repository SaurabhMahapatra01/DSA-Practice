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

Node *Deletion(Node * head, int value)
{
	Node *temp = head;
	while(temp->next->data != value)
	{
		temp == temp->next;
	}
	Node *todelete=temp->next;
	temp->next=temp->next->next;

	delete todelete;
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
    int value;
    cin>>value;
   head = Deletion(head, value);
    print(head);
    
	return 0;
}
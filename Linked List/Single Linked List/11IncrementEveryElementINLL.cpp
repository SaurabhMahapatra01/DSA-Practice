#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
    Node *next =NULL;
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

	Node *head =NULL;
	Node *tail = NULL;

	while(data != -1)
	{
		Node *newNode = new Node(data);

		if(head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else{
			tail ->next = newNode;
			tail = tail ->next;
		}
		cin>>data;
	}
	return head;
}
void Increment(Node * head)
{
	Node *temp = head;
	while(temp != NULL)
	{
		temp ->data++;
		temp = temp ->next;
	}
}

void print(Node *head)
{
	Node *current = head;
	while(current != NULL)
	{
		cout<<current->data<<"=>";
		current = current->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	
  Node * head = Take_Input();
  print(head);
  Increment(head);
  print(head);
	return 0;
}
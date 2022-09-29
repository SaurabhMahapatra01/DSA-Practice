#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *prev;
	Node *next;
	Node(int y)
	{
		data = y;
		prev = NULL;
		next = NULL;
	}
};

Node *takeInput()
 {
 	
 	int data;
 	cin>>data;

 	Node *head = NULL; 
 	Node *tail= NULL;

    while(data != -1)
    {
    	Node *newnode = new Node(data); // Create teh new Node

    	if(head == NULL){
    		
    		head = newnode;
    		tail = newnode;

    	}
    	else{
    		tail->next = newnode;
    		tail = tail->next;
    	}
    	cin>>data;

    }
    return head;
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

Node *ReverseDLL(Node *head)
{
	if(head == NULL || head ->next == NULL){
		return head;
	}
	Node *temp = NULL;
	Node *curr = head;
	while(curr != NULL)
	{
		temp = curr->prev;
		curr->prev = curr -> next;
		curr->next = temp;
		curr = curr->prev;
	}
	return temp-> prev;
}
int main()
{
	// Node *head = takeInput();
	Node *head =  new Node(100);
  Node *temp1 = new Node(101);	
  Node *temp2 = new Node(102);	
  head ->next = temp1;
  temp1 ->prev = head;
  temp1 ->next = temp2;
  temp2 ->prev = temp1;

	print(head);

    head = ReverseDLL(head);
	print(head);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next=NULL;
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


Node * Deletetail(Node *head)
{
	if(head == NULL){
		return NULL;
	}
	if(head->next ==NULL){
		delete head;
		return NULL;
	}
	Node * Current = head;
	while(Current ->next ->next !=NULL)
	{
		Current = Current ->next;
	}
	delete(Current->next);
	Current->next = NULL;
	return head;
}
void Print(Node *head)
{
	Node *Current = head;
	while(Current != NULL)
	{
		cout<<Current ->data<<"=>";
		Current = Current->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	
  Node *head = Take_Input();
  Print(head);
  head = Deletetail(head);
  Print(head);

	return 0;
}
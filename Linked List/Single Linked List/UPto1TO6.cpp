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
Node *takeInput()
{
	int data;
	cin>>data;

    Node *head= NULL;
    Node *tail = NULL;

    while(data != -1)
    {
    	Node *newNode = new  Node(data);

    	if(head == NULL)
    	{
    		head = newNode;
    		tail = newNode;
    	}
    	else{
    		tail ->next = newNode;
    		tail = tail->next;
        // tail->prev = newnode;
			// newnode ->next = tail;
			// tail = newnode;
			// newnode->prev = NULL;
			// head = newnode;
    	}
    	cin>>data;
    }
    return head;
}

Node *InsertBegin(Node *head, int x)
{
	Node *temp = new Node(x);
	temp ->next = head;
	return temp;
}


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
void Print(Node * head)
{
	Node *Current = head;
	while(Current != NULL)
	{
		cout<<Current->data<<"=>";
        Current = Current->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	Node *head = takeInput();
	Print(head);
    head = InsertBegin(head,9);
    Print(head);
    head = InsertEnd(head, 6);
    Print(head);
    head = DeleteHead(head);
	Print(head);


	return 0;
}
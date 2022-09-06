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
 	//Declare the Varibale
 	int data;
 	cin>>data;

 	Node *head = NULL; //To Store the starting point of the Linked List
 	Node *tail= NULL;// To Store the end of le list in order to append the data
    
    while(data != -1)
    {
    	Node *newnode = new Node(data); // Create teh new Node

    	if(head == NULL){
    		//If the list is ennpty it means head dosen't have any address
    		//Therefore we will append the empty newnode to head  7 tail
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
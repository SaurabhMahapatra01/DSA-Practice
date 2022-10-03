#include<bits/stdc++.h>
using namespace std;

struct Node 
{
	int data;
	Node *next;
	Node *prev;
	Node(int y)
	{
		data =y;
		next=NULL;
		prev=NULL;
	}
};
// Node *head = NULL;
// Node *tail = NULL;
// void insert()
// {
//    Node *newnode =new Node;
//    cin>>newnode->data;

//    if(head == NULL){
//    	newnode ->next = NULL;
//    	newnode ->prev = NULL;
//    	head = newnode;
//    	tail = newnode;
//    }
//    else{
//    	tail ->prev = newnode;
//    	newnode->next = tail;
//    	tail = newnode;
//    	newnode ->prev = NULL;
//    	head = newnode; 
//    }
// }

void print(Node *head)
{
   Node *curr = head;
   while(curr!=NULL)
   {
   	cout<<curr->data<<"=>";
   	curr = curr->next;
   }
   cout<<"NULL"<<endl;
}

Node *InsertEnd(Node *head, int data)
{
	Node *temp = new Node(data);
	if(head == NULL){
		return temp;
	}
	Node *curr = head;
	while(curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = temp;
	temp->prev = curr;
	return head;

}
		
int main()
{

	Node *head = new Node(10);
	Node *temp1= new Node(20);
	Node *temp2= new Node(30);
	head ->next = temp1;
	temp1 ->prev  = head;
	temp1->next = temp2;
	temp2->prev =temp1;
    print(head);
    int data;
    cin>>data;
    head= InsertEnd(head, data);
    print(head);

	return 0;
}
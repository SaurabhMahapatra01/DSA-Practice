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
			tail ->next = newNode;
			tail = tail ->next;
		}
		cin>>data;
	}
	return head;
}
 
 void print(Node *head)
 {
 	Node *curr = head;
 	while(curr != NULL)
 	{
 		cout<<curr->data<<"=>";
 		curr = curr -> next;
 	}
 	cout<<"NULL"<<endl;
 }
 int length(Node *head)
 {
 	int count = 0;
 	while(head != NULL)
 	{
 		count++;
 		head = head->next;
 	}
 	return count;
 }
int main()
{
	Node * head = Take_Input();
	print(head);
	cout<<length(head);

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node*next;
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

void print(Node *head)
{
	Node *curr = head;
	while(curr != NULL)
	{
		cout<<curr->data<<"=>";
		curr = curr->next;
	}
	cout<<"NULL"<<endl;
}

Node *ReverseLLREC(Node *head)
{
  if(head == NULL || head->next == NULL){
  	return head;
  }
  Node *SmallHead = ReverseLLREC(head->next);
  head->next->next = head;
  head->next = NULL;
  
  return SmallHead;
}
int main()
{
	
  Node *head = Take_Input();
  print(head);

  head = ReverseLLREC(head);
  print(head);
	return 0;
}
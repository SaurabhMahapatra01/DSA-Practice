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

Node *MidNode(Node *head)
{
	if(head == NULL || head ->next == NULL){
		return head;
	}
	Node *start = head;
	Node *end = head ->next;
	 while(end != NULL && end->next != NULL)
	 {
	 	start = start -> next;
	 	end = end ->next ->next;
	 }
	 return start;
}
int main()
{
	
  Node *head = Take_Input();
  print(head);
  head = MidNode(head);
  print(head);

	return 0;
}
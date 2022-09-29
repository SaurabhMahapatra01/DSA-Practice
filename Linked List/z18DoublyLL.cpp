#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *prev;
	Node *next;
	Node(int x){
		data = x;
		prev = NULL;
		next = NULL;
	}
};

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
	Node * head = new Node(101);
	Node *temp1 = new Node(103);
	Node *temp2 = new Node(105);
	head->next = temp1;
	temp1 ->prev = head;
	temp1 ->next = temp2;
	temp2 ->prev = temp1;
	print(head);
	return 0;
}
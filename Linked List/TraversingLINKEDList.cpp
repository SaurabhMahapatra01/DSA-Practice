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
 void Print(Node *head)
 {
 	Node *Current = head;
 	while(Current !=NULL)
 	{
 		cout<<Current->data<<" ";
 		Current = Current -> next;
 	}

// RECURSION 
 	// if ( head == NULL){
 	// 	return;
 	// }
 	// cout<<(head->data)<<" ";
 	// print(head->next);
 }
int main()
{
	Node *head = new Node(10);
	// head->next = new Node(20);
	// head->next->next = new Node(30);
	// head->next->next->next = new Node(40);
    Print(head);
    

	return 0;
}
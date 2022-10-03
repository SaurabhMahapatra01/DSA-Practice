#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next =NULL;
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
			tail->next= newNode;
			tail = tail->next;
		}
		cin>>data;
	}
	return head;
}
void print(Node *head)
{
	Node *Curr = head;
	while(Curr != NULL)
	{
		cout<<Curr->data<<"=>";
		Curr = Curr -> next;
	}
	cout<<"NULL"<<endl;
}
// By Iterative 
// int Search(Node *head, int value)
// {
// 	int pos = 0;
// 	Node *curr = head;
// 	while(curr != NULL)
// 	{
// 		if(curr->data == value){
// 			return pos;
// 		}
// 		else{
// 			pos++;
// 			curr = curr->next;
// 		}
// 	}
// 	return -1;
// }

// By Recursively
 int SearchR(Node *head, int value)
 {
    if(head==NULL){
    	return -1;
    }
    if(head->data == value){
    	return 1;
    }
    else{
    	int result = SearchR(head->next, value);
    	if(result == -1){
    		return -1;
    	}
    	else{
    		return result + 1;
    	}
    }
 }

int main()
{
	Node *head = Take_Input();
	print(head);
	int value;
	cin>>value;
	cout<<SearchR(head, value);
	
	return 0;
}
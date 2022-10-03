// Complexities :
//  Time = O(n)


#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node *prev;
	Node(int y)
	{
		data = y;
		next = NULL;
		prev = NULL;
	}
};

Node *delHead(Node *head){
    if(head==NULL){
    	return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }    
    
       Node *curr=head;
       while(head->next != NULL)
       {
       	curr = curr->next;
       curr->prev->next = NULL;
       delete curr;
       return head;
        
       }
    
}

void print(Node *head)
{
	Node *current = head;
	while(current != NULL)
	{
		cout<<current->data<<"=>";
		current = current -> next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	// int b;
	// cin>>b;
	// for(int i=0;i<b;i++)
 //      {
 //      	int n;
 //      	cin>>n;
 //      	Node *head = new Node(n);
 //      	Node 
 //      	print(head);
 //      }

	// Node *head = new Node(100);
	// Node *temp1 = new Node(101);
	// Node *temp2 = new Node(102);
	// Node *temp3 = new Node(103);
	// head ->  next = temp1;
	// temp1-> prev = head;
	// temp1->next = temp2;
	// temp2->prev = temp1;
	// temp2->next = temp3;
	// temp3->prev = temp2;
	print(head);
	head = delHead(head);
	print(head);

	return 0;
}
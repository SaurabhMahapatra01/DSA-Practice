#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next = NULL;
	}
};
Node *takeInput()
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
       	tail ->next =newNode;
       	tail = tail->next;
       }
       cin>>data;

	}
return head;
}
Node *merge(Node *head1, Node*head2)
{
	if(head1 == NULL){
		return head2;
	}
	if(head2 == NULL){
		return head1;
	}
	Node *h1 = head1;
	Node * h2 = head2;
	Node *head = NULL;
	Node * tail =NULL;

	if(h1->data <= h2->data){
		head = h1;
		tail = h1;
		h1 = h1->next;
	}
	else{
		head == h2;
		tail = h2;
		h2 = h2->next;
	}
	while (h1 !=NULL && h2 != NULL)
	{
		if(h1->data <= h2->data){
			tail->next = h1;
			tail = h1;
			h1 = h1->next;
		}else{
			tail->next = h2;
			tail = h2;
			h2 = h2->next;
		}
	}
	if(h1 != NULL){
		tail->next = h1;
	}
	else{
		tail->next = h2;
	}
	return head;

}

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
	Node *head1 = takeInput();

	Node *head2 = takeInput();
	
	Node * head = merge(head1, head2);
	print(head);
	

	return 0;
}
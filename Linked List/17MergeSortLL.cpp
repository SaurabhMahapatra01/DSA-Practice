// Complexities :
// time Complexity = O(n * logn)
// space complexity = O(logn)

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node * next;
	Node(int x){
		data = x;
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
			tail ->next = newNode;
			tail = tail->next;
		}
		cin>>data;
	}
return head;

}


Node *MidNode(Node * head)
{
	Node *start = head;
	Node *end = head;
	while(end != NULL && end->next != NULL)
	{
		start = start->next;
		end = end->next->next;
	}
	return start;
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

Node *MergeLL(Node *head)
{
	if(head == NULL || head->next == NULL){
		return head;
	}
	Node *mid = MidNode(head);
	Node *half1 =head;
	Node *half2 = mid->next;
	mid ->next = NULL;
	half1 = MergeLL(half1);
	half2 = MergeLL(half2);

	Node * finalhead = (half1,half2);
	return finalhead;



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
	Node *head = takeInput();
	print(head);
	Node *merg= MergeLL(head);
	print(merg);

	return 0;
}
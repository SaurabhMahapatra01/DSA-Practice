#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *prev;
	Node *next;
	Node(int y){
		data = y;
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

Node *insertBegin(Node *head,int data){
    Node *temp=new Node(data);
    temp->next=head;
    if(head!=NULL){
    	head->prev=temp;
    }
    return temp;
    
}
int main()
{
  Node *head =  new Node(100);
  Node *temp1 = new Node(101);	
  Node *temp2 = new Node(102);	
  head ->next = temp1;
  temp1 ->prev = head;
  temp1 ->next = temp2;
  temp2 ->prev = temp1;
  print(head);

  int data;
  cin>>data;
  head = insertBegin(head, data); 
  print(head);

	return 0;
}



// *Double Linked List*
#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node *prev;
	Node(int y){
		data = y;
		next = NULL;
		prev = NULL;
	}
};
Node *create()
{
int a;
Node *temp;
temp=new Node(a);

Node *head = NULL;
Node *tail = NULL;
cout<<"Enter the data element : ";
cin>>a;
temp->data=a;
temp->prev=NULL;
temp->next=NULL;
if(head==NULL)
{
head=temp;
tail=temp;
}
else
{
tail->next=temp;
temp->prev=tail;
tail=temp;
}
}
void LinkedList::Travesal_Forward()
{
	node *temp=first;
	if(temp==NULL)
	  cout<<"List is Empty"<<endl;
	 else
	 {
	 	while(temp!=NULL)
	 	{
	 		cout<<temp->data<<"===>";
	 		temp=temp->next;
		 }
		 cout<<"NULL";
	  } 
}
void LinkedList::Traversal_Backward()
{
	node *temp=last;
	if(temp==NULL)
	  cout<<"List is Empty"<<endl;
	 else
	 {
	 	while(temp!=NULL)
	 	{
	 		cout<<temp->data<<"===>";
	 		temp=temp->pre;
		 }
		 cout<<"NULL";
	  } 
}

int main()
{
  LinkedList list;
  int size;
  cout<<"Enter the size of list :  ";
  cin>>size;
for(int i=0;i<size;i++)
		list.create();
	list.Travesal_Forward();
	cout<<endl;
 	list.Traversal_Backward(); 		
  return 0;
}
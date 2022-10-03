// Complexities:
// Time = O(1)
// Space = O(1

#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node *prev;
	Node(int y )
	{
		data = y;
		next = NULL;
		prev = NULL;
	}
};
Node *start = NULL;
Node *end = NULL;

// void takeInput()
// {
// 	Node *input = new Node;
//     cin>>input->data;
//     if(start == NULL)
//     {
//     	input->next = NULL;
//     	input->prev = NULL;

//     	start = input;
//     	end = input;
//     }
//     else{
//     	end ->prev = input;
//     	input->next= end;
//     	end = input;
//     	input->prev = NULL;
//     	start = input;
//     }
// }

Node *takeInput()
 {
 	//Declare the Varibale
 	int data;
 	cin>>data;

 	Node *head = NULL; //To Store the starting point of the Linked List
 	Node *tail= NULL;// To Store the end of le list in order to append the data
    
    while(data != -1)
    {
    	Node *newnode = new Node(data); // Create teh new Node

    	if(head == NULL){
    		//If the list is ennpty it means head dosen't have any address
    		//Therefore we will append the empty newnode to head  7 tail
    		head = newnode;
    		tail = newnode;

    	}
    	else{
    		tail->prev = newnode;
    		newnode->next = tail;
    		tail = newnode;
    		newnode->prev = NULL;
    		head = newnode;
    	}
    	cin>>data;

    }
    return head;
 }

// Node *takeInput()
// {
//   int a;
//   cin>>a;
//    Node *head = NULL;
//    Node *tail = NULL;
   
//    	Node *temp;
//     temp=new Node();
// temp->data=a;
// temp->prev=NULL;
// temp->next=NULL;
// if(head==NULL)
// {
// head=temp;
// tail=temp;
// }
// else
// {
// tail->next=temp;
// temp->prev=tail;
// tail=temp;
// }
   
// }


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

Node *deleteHead(Node *head)
{
	if(head == NULL){
		return NULL;
	}
	if(head->next == NULL){
		delete head;
		return NULL;
	}
	else{
		Node *temp = head;
		head = head ->next;
		head->prev = NULL;
		delete temp;
		return head;
    }
}



int main()
{
	// Node *head = new Node();
	// Node *temp1 = new Node();
	// Node *temp2 = new Node();
	// Node *temp3 = new Node();
	// head ->  next = temp1;
	// temp1-> prev = head;
	// temp1->next = temp2;
	// temp2->prev = temp1;
	// temp2->next = temp3;
	// temp3->prev = temp2;
    // int n;
    // cin>>n;
    // for(int i =0; i<n ;i++)
    // {
    //  takeInput();
    // }
    Node *head = takeInput();
	print(head);
	head = deleteHead(head);
	print(head);

	return 0;
}
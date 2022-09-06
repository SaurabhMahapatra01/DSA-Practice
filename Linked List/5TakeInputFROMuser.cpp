#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data; //DATA part of Node
	Node *next;  //Next Part of Node that store address
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
 		cout<<Current->data<<"==> "<<" ";
 		Current = Current -> next;
 	}
 
// RECURSION 
 	// if ( head == NULL){
 	// 	return;
 	// }
 	// cout<<(head->data)<<" ";
 	// print(head->next);
 }

 Node *takeInput()
 {
 	//Time Complexity  = O(n)
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
    		tail->next = newnode;
    		tail = tail->next;
    	}
    	cin>>data;

    }
    return head;
 }
int main()
{
    // Node *head = new Node(10);
	Node *head = takeInput();
	// head->next = new Node(20);
	// head->next->next = new Node(30);
	// head->next->next->next = new Node(40);
    Print(head);
    

	return 0;
}
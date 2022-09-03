#include<bits/stdc++.h>
using namespace std;
 class Node
 {
   public:
   	int data;
   	Node *next;

   	Node(int data)
   	{
   		this->data = data;
   		next = NULL;
   	}
 };
 void print(Node *head)
 {
 	Node *temp = head;
   while(head != NULL){
   	cout<<head -> data<<" ";
   	head = head -> next;
   }
   //  while(head != NULL){
   // 	cout<<head -> data<<" ";
   // 	head = head -> next;
   // }
 }
int main()
{
	//Statically
	Node n1(1);
    Node *head = &n1;

	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    print(head);


     
    //Dynamically
     
    // Node *n3 = new Node(3);
    // Node *head = n3;

    // Node *n4 = new Node(4);
    // n3->next = n4;
	return 0;
}
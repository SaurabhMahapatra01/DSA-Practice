#include<bits/stdc++.h>
using namespace std;

struct  Node
{
	Node *next;
	int data;
	Node(int y){
       data = y;
       next = NULL;
	}
};

struct Stack{
	Node *head;
	int Size;
	Stack(){
		head = NULL;
		Size = 0;
	}

	void push(int data)
	{
		Node *temp = new Node(data);
		temp->next = head;
		head = temp;
		Size++;
	}

	int pop(){
		if(head == NULL){
			cout<<"Stack is Empty"<<endl;
			return INT_MAX;
		}
		int result = head->data;
		Node *temp = head;
		head = head->next;
		delete(temp);
		Size--;
		return result;
	}

	int top(){
		if(head == NULL){
			cout<<"Stack is Empty"<<endl;
			return INT_MAX;
		}
		return head->data;
	}

	int size(){
		return Size;
	}

	bool isEmpty(){
		return head==NULL;
	}
};

int main()
{
	Stack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.isEmpty()<<endl;
  

	return 0;
}
#include<iostream>
// #include<bits/stdc++.h>
#define N 3
using namespace std;

class node{
	public:
	int data;
	node* next;
	
	node(int data) {
		this->data = data;
		this->next = NULL;
	}
	
	
};

void push(node* &head , int data) {
	node* newnode = new node(data);
	
	if(head == NULL) {
		head = newnode;
		return;
	}
	
	newnode->next = head;
	head = newnode;
	
	}
	
void deleteAtHead(node* &head) {
	if(head == NULL) {
		cout << "Stack is Empty" << endl;
		return ;
	}
	node* to_delete = head;
	head = head->next;
	delete(to_delete); 
}
void display(node* head) {
	node* temp = head;
	while(temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
	
}

int main() {
	node* head = NULL;
	push(head , 1);
	push(head , 2);
	push(head , 3);
	display(head);
	deleteAtHead(head);
	display(head);
	deleteAtHead(head);
	display(head);
	deleteAtHead(head);
	display(head);
	deleteAtHead(head);
//	display(head);
	
	
	return 0;
}



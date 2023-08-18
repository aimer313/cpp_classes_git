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


void insertAtHead(node* &head , int data) {
	node* newnode = new node(data);
	
	if(head == NULL) {
		head = newnode;
		return;
	}
	
	newnode->next = head;
	head = newnode;
	
}
node* insertTail(node* &head , int data) {
	node* newnode = new node(data);
	
	if(head == NULL) {
		head = newnode;
		return head;
	}
	node* temp = head;
	
	while(temp->next != NULL) {
		temp = temp->next;
	}
	
	temp->next = newnode;
	
}
node* reverse(node* &head) {
	node* prevptr = NULL;
	node* currptr = head;
	node* nextptr;
	while(currptr!=NULL) {
		nextptr = currptr->next;
		currptr->next = prevptr;
		prevptr = currptr;
		currptr = nextptr;
	}
	
	return prevptr;
}

node* reverseRecursive(node* &head) {
	if(head == NULL || head->next == NULL) {
		return head;
	}
	node* newhead = reverseRecursive(head->next);
	
	head->next->next = head;
	head->next = NULL;
	return newhead;
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
	insertTail(head , 1);
	insertTail(head , 2);
	insertTail(head , 3);
	insertTail(head , 4);
	insertTail(head , 5);
	display(head);
//	node* newhead = reverse(head);
//	display(newhead);
	
	node* newhead1 = reverseRecursive(head);
	display(newhead1);
	return 0;
}

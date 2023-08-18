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

bool search(node* head , int key) {
	node* temp = head;
	
	while(temp!=NULL) {
		if(temp->data == key) return true;
		else{
			temp=temp->next;
		}
	}
	return false;
}
void deleteAtHead(node* &head) {
	node* to_delete = head;
	head = head->next;
	delete(to_delete); 
}
void deleteLL(node* &head , int d) {
	if(head == NULL) {
		return;
	}
	
	if(head->next == NULL) {
		deleteAtHead(head);
		return ;
	}
	node* temp = head;
	
	while(temp->next->data != d) {
		temp=temp->next;
	}
	node* to_delete = temp->next;
	temp->next = temp->next->next;
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
	insertTail(head , 1);
	insertTail(head , 2);
	insertTail(head , 3);
	display(head);
////	insertAtHead(head , 1);
////	insertAtHead(head , 2);
////	insertAtHead(head , 3);
////	display(head);
	
//	cout << search(head , 3) << endl;
//	cout << search(head , 7) << endl;
	deleteLL(head , 3);
	deleteLL(head , 2);
	deleteLL(head , 1);
	display(head);
	
	return 0;
}

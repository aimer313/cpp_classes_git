/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

void dequeue(node* &front) {
	node* to_delete = front;
	front = front->next;
	delete(to_delete);
}

void enqueue(node* &front ,node* &rear ,  int data) {
	node* newnode = new node(data);
	
	if(front == NULL && rear == NULL) {
		front = rear = newnode;
	}
	
	else {
		rear->next = newnode;
		rear = newnode;
	}
}
void display(node* front) {
	node* temp = front;
	
	while(temp != NULL) {
		cout << temp -> data << "->";
		temp=temp->next;
	}
	cout << "NULL" << endl;
}


int main() {
	node* front = NULL ;
	node* rear = NULL;
	
	enqueue(front , rear , 2);
	enqueue(front , rear , 3);
	enqueue(front , rear , 5);
	enqueue(front , rear , 6);
	enqueue(front , rear , 1);
	display(front);
	dequeue(front);
	display(front);
	dequeue(front);
	display(front);
	
	return 0;
}


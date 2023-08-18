#include<iostream>
// #include<bits/stdc++.h>
#define N 3
using namespace std;
class queue{
	int *arr;
	int front , rear;
	
	public:
		queue() {
			arr = new int[N];
			front = -1;
			rear = -1;
		}
		
		
		bool isFull() {
			if(rear == N-1) return true;
			else return false;
		}
		
		bool isEmpty() {
			if(front == -1 || front > rear) return true;
			else return false;
		}
		
		void push(int data) {
			if(isFull()) {
				cout << "Queue is Full" << endl;
				return ;
			}
			
			rear++;
			arr[rear] = data;
			
			if(front == -1) front++;
		}
		void pop() {
			if(isEmpty()) {
				cout << "Queue is Empty" << endl;
				return;
			}
			
			front++;
		}
		
		int peek() {
			if(isEmpty()) {
				cout << "Queue is Empty" << endl;
				return -1;
			}
			
			return arr[front];
		}
		
};
int main() {
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.pop();
	cout << q.peek() << endl;
//	q.pop();
//	q.pop();
//	q.pop();
//	cout << q.peek() << endl;
	return 0;
}

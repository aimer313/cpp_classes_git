#include<iostream>
// #include<bits/stdc++.h>
#define N 5
using namespace std;
class stack{
	int *arr;
	int front , rear;
	
	public:
		stack() {
			arr = new int[N];
			front = -1;
			rear = -1
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
			
			front--;
		}
		
		int peek() {
			if(isEmpty()) {
				cout << "Stack is Empty" << endl;
				return -1;
			}
			
			return arr[front];
		}
		
};
int main() {
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.pop();
	cout << st.peek() << endl;
	st.pop();
	st.pop();
	st.pop();
	cout << st.peek() << endl;
	return 0;
}

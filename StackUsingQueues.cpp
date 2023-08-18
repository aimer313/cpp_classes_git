class MyStack {
public:
    queue<int> q1,q2;
    MyStack() {
        queue<int> q1,q2;
    }
    
    void push(int x) {
        q2.push(x);
        
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        
        swap(q1,q2);
    }
    
    int pop() {
        int x ;
        if(!q1.empty()) {
            x = q1.front();
            q1.pop();
        } 
        return x;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(!q1.empty()) return false;
        return true;
    }
};

//Using single queue
/*queue<int> q;
push(x) {
	q.push(x);
	
	for(int i = 0 ; i<q.size()-1 ; i++) {
		q.push(q.front());
		q.pop();
	}
}

pop() {
	return q.front();
}*/

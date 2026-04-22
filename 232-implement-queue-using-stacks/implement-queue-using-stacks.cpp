class MyQueue {
    stack<int>s;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s.empty()){
            s.push(x);
            return;
        }
        int temp=s.top();
        s.pop();
       
        push(x);
        s.push(temp);

    }
    
    int pop() {
        if(s.empty()){
            return -1;
        }
        int data=s.top();
        s.pop();
        return data;
        
    }
    
    int peek() {
        if(s.empty()){
            return -1;
        }
        else{
            return s.top();
        }
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
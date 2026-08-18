class MinStack {
public:

    MinStack() {   
    }
    
    void push(int val) {
        stack.push(val);
        if(minTracker.empty() || val < minTracker.top()) {
            minTracker.push(val);
        }
        else {
            minTracker.push(minTracker.top());
        }
    }
    
    void pop() {
        stack.pop();
        minTracker.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minTracker.top();
    }

private:
    stack<int> minTracker;
    stack<int> stack;

};

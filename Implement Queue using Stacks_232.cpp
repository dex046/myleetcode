class Queue {
private:
    stack<int> sta1;
    stack<int> sta2;
public:
    // Push element x to the back of queue.
    void push(int x) {
        sta1.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        while(!sta1.empty())
        {
            sta2.push(sta1.top());
            sta1.pop();
        }
        
        sta2.pop();
        while(!sta2.empty())
        {
            sta1.push(sta2.top());
            sta2.pop();
        }
    }

    // Get the front element.
    int peek(void) {
        while(!sta1.empty())
        {
            sta2.push(sta1.top());
            sta1.pop();
        }
        
        int res = sta2.top();
        while(!sta2.empty())
        {
            sta1.push(sta2.top());
            sta2.pop();
        }
        return res;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return sta1.empty();
    }
};
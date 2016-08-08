class Stack {
public:
queue<int> que;
    // Push element x onto stack.
    void push(int x) {
        que.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        int size = que.size();
        for(int i = 1; i < size; ++i)
        {
            int temp = que.front();
            que.pop();
            que.push(temp);
        }
        que.pop();
    }

    // Get the top element.
    int top() {
        int size = que.size();
        for(int i = 1; i < size; ++i)
        {
            int temp = que.front();
            que.pop();
            que.push(temp);
        }
        int res = que.front();
        que.pop();
        que.push(res);
        return res;
    }

    // Return whether the stack is empty.
    bool empty() {
        return que.empty();
    }
};
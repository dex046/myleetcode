class MinStack {
public:
stack<pair<int, int>> sta;
    void push(int x) {
        int min_i;
        if(sta.empty())
        {
            min_i = x;
        }
        else
        {
            min_i = sta.top().second < x ? sta.top().second : x;
        }
        sta.push({x, min_i});
    }

    void pop() {
        sta.pop();
    }

    int top() {
        return sta.top().first;
    }

    int getMin() {
        return sta.top().second;
    }
};
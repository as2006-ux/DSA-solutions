class MyQueue {
    stack<int> s1, s2;
public:
    void push(int x) {
        s1.push(x);
    }
    int pop() {
        while(s1.size() > 1) {
            s2.push(s1.top());
            s1.pop();
        }
        int res = s1.top(); s1.pop();
        swap(s1, s2);
        return res;
    }
};

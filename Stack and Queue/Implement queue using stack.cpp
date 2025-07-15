#include <stack>
using namespace std;

class StackQueue {
private:
    stack<int> inStack;
    stack<int> outStack;

public:
    StackQueue() {
    }

    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        int val = outStack.top();
        outStack.pop();
        return val;
    }

    int peek() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        return outStack.top();
    }

    bool isEmpty() {
        return inStack.empty() && outStack.empty();
    }
};

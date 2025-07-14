#include <queue>
using namespace std;

class QueueStack {
private:
    queue<int> q;

public:
    QueueStack() {
    }

    // Push element x onto stack.
    void push(int x) {
        q.push(x);
        int size = q.size();

        // Rotate the queue to move the new element to the front
        for (int i = 0; i < size - 1; i++) {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
    }

    // Removes the top element of the stack and returns it.
    int pop() {
        if (q.empty()) return -1;
        int topElement = q.front();
        q.pop();
        return topElement;
    }

    // Get the top element without removing it.
    int top() {
        if (q.empty()) return -1;
        return q.front();
    }

    // Returns whether the stack is empty.
    bool isEmpty() {
        return q.empty();
    }
};

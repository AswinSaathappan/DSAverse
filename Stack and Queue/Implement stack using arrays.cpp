class ArrayStack {
private:
    int arr[1000];  // static array of fixed size
    int topIndex;   // to keep track of the top element index

public:
    ArrayStack() {
        topIndex = -1;  // stack is empty initially
    }

    // Push element x onto the stack
    void push(int x) {
        topIndex++;
        arr[topIndex] = x;
    }

    // Removes and returns the top element of the stack
    int pop() {
        if (topIndex == -1) return -1;  // Underflow check (optional)
        int temp = arr[topIndex];
        topIndex--;
        return temp;
    }

    // Returns the top element without removing it
    int top() {
        if (topIndex == -1) return -1;  // Empty stack
        return arr[topIndex];
    }

    // Returns true if the stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }
};

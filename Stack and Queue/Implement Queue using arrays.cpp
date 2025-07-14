class ArrayQueue {
private:
    int arr[1000];   // Static array with fixed size
    int front;       // Index of the front element
    int rear;        // Index of the last element

public:
    ArrayQueue() {
        front = 0;
        rear = 0;
    }

    // Adds element x to the end of the queue
    void push(int x) {
        arr[rear] = x;
        rear++;
    }

    // Removes and returns the front element
    int pop() {
        if (isEmpty()) return -1;
        int val = arr[front];
        front++;
        return val;
    }

    // Returns the front element without removing it
    int peek() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    // Returns true if the queue is empty
    bool isEmpty() {
        return front == rear;
    }
};

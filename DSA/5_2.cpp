#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, capacity;
    int* queue;

public:
    Queue(int size) {
        capacity = size;
        front = rear = -1;
        queue = new int[capacity];
    }

    void enqueue(int x) {
        if (rear == capacity-1) {
            cout << "Queue is full. Cannot enqueue element " << x << endl;
            return;
        }

        if (front == -1)
            front = 0;

        queue[++rear] = x;
        cout << "Element " << x << " enqueued to the queue." << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty. Cannot dequeue element." << endl;
            return;
        }

        int x = queue[front++];
        cout << "Element " << x << " dequeued from the queue." << endl;
    }

    void dequeue2() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty. Cannot dequeue elements." << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << "Element " << queue[i] << " dequeued from the queue." << endl;
        }

        front = rear = -1;
    }
};

int main() {
    int Q;
    cout << "Enter the number of queries: ";
    cin >> Q;

    Queue q(Q);

    cout << "Enter the queries:" << endl;
    for (int i = 0; i < Q; i++) {
        int query, x;
        cin >> query;

        if (query == 1) {
            cin >> x;
            q.enqueue(x);
        } else if (query == 2) {
            q.dequeue();
        } else {
            cout << "Invalid query." << endl;
        }
    }
    return 0;
}
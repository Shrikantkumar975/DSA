#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* queue;
public:
    Queue(int s) {
        front = rear = -1;
        size = s;
        queue = new int[s];
    }

    void enqueue(int value) {
        if (rear == size - 1) {
            cout << "Queue Overflow" << endl;
            return;
        } else {
            if (front == -1) front = 0;
            queue[++rear] = value;
            cout << "Enqueued " << value << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
            return;
        } else {
            cout << "Dequeued " << queue[front++] << endl;
            if (front > rear) front = rear = -1; // Reset queue if empty
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is Empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }

    ~Queue() { // de-costructor
        delete[] queue;
    }
};

int main() {
    int size, choice, value;
    cout << "Enter the size of the queue: ";
    cin >> size;
    Queue q(size);

    while (true) {
        cout << "Enter 1 to enqueue data" << endl;
        cout << "Enter 2 to dequeue data" << endl;
        cout << "Enter 3 to display data" << endl;
        cout << "Enter 4 to exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter data you want to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}

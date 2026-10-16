// #include <bits/stdc++.h>
// using namespace std;
// class Node {
// public:
//     int val;1
//     Node* next;

//     Node(int data) {
//         val = data;
//         next = nullptr;
//     }
// };
// class Queue {
// public:
//     Node* front;
//     Node* rear;
//     Queue() {
//         front = rear = nullptr;
//     }
//     void enqueue(int data) {
//         Node* newNode = new Node(data);
//         if (rear == nullptr) {
//             front = rear = newNode;
//             return;
//         }
//         rear->next = newNode;
//         rear = newNode;
//     }

//     void dequeue() {
//         if (front == nullptr) {
//             cout << "Queue Empty" << endl;
//             return;
//         }
//         Node* temp = front;
//         front = front->next;
//         if (front == nullptr) {
//             rear = nullptr;
//         }
//         cout << "Dequeued data is " << temp->val << endl;
//         delete temp;
//     }

//     void display() {
//         if (front == nullptr) {
//             cout << "Queue Empty" << endl;
//             return;
//         }
//         Node* temp = front;
//         while (temp != nullptr) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Queue queue;
//     int choice, data;
//     while (true) {
//         cout << "Enter 1 to enqueue data" << endl;
//         cout << "Enter 2 to dequeue data" << endl;
//         cout << "Enter 3 to display data" << endl;
//         cout << "Enter 4 to exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Enter data you want to enqueue: ";
//                 cin >> data;
//                 queue.enqueue(data);
//                 break;
//             case 2:
//                 queue.dequeue();
//                 break;
//             case 3:
//                 queue.display();
//                 break;
//             case 4:
//                 return 0;
//             default:
//                 cout << "Invalid choice, please try again." << endl;
//         }
//     }
// }


// With the help of stl
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    int choice, data;
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
                cin >> data;
                q.push(data);
                cout << data <<" is enqueued.\n";
                break;
            case 2:
                if (q.empty()) {
                    cout << "Queue Empty" << endl;
                } else {
                    cout << "Dequeued data is " << q.front() << endl;
                    q.pop();
                }
                break;
            case 3:
                if (q.empty()) {
                    cout << "Queue Empty" << endl;
                } else {
                    queue<int> temp = q;
                    while (!temp.empty()) {
                        cout << temp.front() << " ";
                        temp.pop();
                    }
                    cout << endl;
                }
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}

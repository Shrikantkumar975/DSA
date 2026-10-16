#include <iostream>
using namespace std;

int *stack, top = -1, MAX;

void push(int data) {
    if (top == MAX - 1) {
        cout << "Stack Full" << endl;
    } else {
        top++;
        stack[top] = data;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Empty" << endl;
    } else {
        int data = stack[top];
        top--;
        cout << "Data deleted: " << data << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack empty" << endl;
    } else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, data;
    cout << "Enter the size of the stack: ";
    cin >> MAX; 
    stack = new int[MAX]; // Dynamically allocate memory for the stack

    while (true) {
        cout << "Enter 1 to push data" << endl;
        cout << "Enter 2 to pop data" << endl;
        cout << "Enter 3 to display data" << endl;
        cout << "Enter 4 to exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter data you want to push: ";
                cin >> data;
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                delete[] stack; // Free the allocated memory
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
}

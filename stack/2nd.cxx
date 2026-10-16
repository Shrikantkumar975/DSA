#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

// WAP that returns the element in a vector that are strictly smaller than their ajacent left and right neighbour Original vector elements are 1 2 5 0 3 1 7

void push(int stack[], int &top, int max, int x) {
    if (top >= max - 1) {
        cout << "Stack overflow" << endl;
        return;
    }
    stack[++top] = x; // Increment top and add the element
    cout << x << " pushed" << endl;
}

void pop(int stack[], int &top) {
    if (top < 0) {
        cout << "Stack underflow" << endl;
        return;
    }
    cout << stack[top--] << " popped" << endl; // Return the top element and decrement top
}

void peek(int stack[], int top) {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top element is: " << stack[top] << endl; // Show the top element
}

bool isEmpty(int top) {
    return top < 0;
}

void display(int stack[], int top) {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    int max;
    cout << "Enter the maximum size of the stack: ";
    cin >> max;

    int stack[max];
    int top = -1; // Initialize top to -1 to indicate empty stack
    int choice;
    int data;
    do {
        cout << "Enter the option you want to choose-----------------------------------------"<<endl;
        cout << "1. Insert the element------------------------------------------------------"<<endl;
        cout << "2. Pop the element----------------------------------------------------------"<<endl;
        cout << "3. Peek the element---------------------------------------------------------"<<endl;
        cout << "4. Check if empty-----------------------------------------------------------"<<endl;
        cout << "5. Display------------------------------------------------------------------"<<endl;
        cout << "6. Exit---------------------------------------------------------------------"<<endl;

        cout << "-------Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data: ";
                cin >> data;
                push(stack, top, max, data);
                break;
            case 2:
                pop(stack, top);
                break;
            case 3:
                peek(stack, top);
                break;
            case 4:
                if (isEmpty(top)) {
                    cout << "Stack is empty" << endl;
                } else {
                    cout << "Stack is not empty" << endl;
                }
                break;
            case 5:
                display(stack, top);
                break;
            case 6:
                cout << "Exiting the program: ";
                display(stack, top);
                break;
            default:
                cout << "Invalid choice. Exiting the program: ";
                display(stack, top);
                break;
        }

        cout << endl << "        ****          " << endl;

    } while (choice > 0 && choice <= 6);

    return 0;
}
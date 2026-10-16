#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = nullptr;
    }
};
class Stack {
public:
    Node* top;
    Stack() {
        top = nullptr;  //head of the stack

    }

    void push(int data) { // basically insertion at begining
        Node* newNode = new Node(data);
        newNode->next = top; // head
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Empty" << endl;
            return;
        } else {
            Node* temp = top;
            cout << "Popped data is " << top->val << endl;
            top = top->next;
            delete temp;
        }
    }

    void display() {
        if (top == nullptr) {
            cout << "Stack Empty" << endl;
            return;
        }
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    int choice, data;
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
                stack.push(data);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}


// using stl
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    int choice, data;
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
                s.push(data);
                break;
            case 2:
                if (s.empty()) {
                    cout << "Stack Empty" << endl;
                } else {
                    cout << "Popped data is " << s.top() << endl;
                    s.pop();
                }
                break;
            case 3:
                if (s.empty()) {
                    cout << "Stack Empty" << endl;
                } else {
                    stack<int> temp = s;
                    while (!temp.empty()) {
                        cout << temp.top() << " ";
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


// My version
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    int n,data;
    cin>>n;
    for(int i = 0;i<n;i++){ //for taking value
        cin>>data;
        s.push(data);
    }
    stack<int> temp = s; // this is the way to assign stack
    while(!temp.empty()){ // for display
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    cout<<"Popped data is "<<s.top()<<endl;
    s.pop();
    stack<int> temp1 = s;
    while(!temp1.empty()){ // for display
        cout<<temp1.top()<<" ";
        temp1.pop();
    }
}
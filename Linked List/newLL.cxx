#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

// Function to append node at the end of the list
void appendNode(node* &head, int data) {
    node* newNode = new node();
    newNode->data = data;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to append node at the beginning of the list
void appendNodeAtBeginning(node*& head, int data) {
    node* newNode = new node();
    newNode->data = data;
    newNode->next = head; // Corrected this line
    head = newNode;
}

// Function to append node at a specific position
void appendNodeAtChoice(node*& head, int data, int pos) {
    if (pos <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    node* newNode = new node();
    newNode->data = data;

    if(pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    int count=1;
    node*temp = head;
    // for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
    //     temp = temp->next;
    // }
    while(temp!=nullptr){
        if(count==pos-1){
        newNode->next = temp->next;
        temp->next = newNode;
        return;
        }

        temp=temp->next;
        count++;
    }

    if(temp == nullptr) {
        cout << "Position out of range!" << endl;
        delete newNode;  // Free the memory as the position is invalid
        return;
    }

}

// Function to print the linked list
void printlist(node* head) {
    node* temp = head;
    cout << "Updated list: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter how many elements you want to enter: ";
    cin >> n;

    node* head = nullptr;
    int data;

    for (int i = 0; i < n; i++) {
        cout << "Enter the data element: ";
        cin >> data;
        appendNode(head, data);
    }

    printlist(head);

    // cout << "Enter the element to insert at the beginning: ";
    // int key;
    // cin >> key;
    // appendNodeAtBeginning(head, key);
    // printlist(head);

    int k, pos;
    cout << "Enter the position in which you want to insert: ";
    cin >> pos;
    cout << "Enter the element which you want to insert: ";
    cin >> k;
    appendNodeAtChoice(head, k, pos);
    printlist(head);

    return 0;
}
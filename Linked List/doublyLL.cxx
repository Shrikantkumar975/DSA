#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    // Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

Node* createNode(int val){
    Node* newNode=new Node();
    newNode->data=val;
    newNode->next=newNode->prev=nullptr;
}

// Function to append a node at the beginning
void appendAtTheBeginning(Node*& head, int val) {
    Node* newNode = createNode(val);
    if (head == nullptr) {
        head = newNode; // If the list is empty, newNode becomes the head
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode; // Update head to newNode
    }
}

// Function to append a node at the end
void appendAtTheEnd(Node*& head, int val) {
    Node* newNode = createNode(val);
    if (head == nullptr) {
        head = newNode; // If the list is empty, newNode becomes the head
        return;
    }
    Node* tail = head;
    while (tail->next != nullptr){
        tail = tail->next; // Traverse to the end of the list
    }
    tail->next = newNode; // Link the last node to newNode
    newNode->prev = tail; // Set the previous pointer of newNode
}

// Function to insert a node at any position
void insertAtPosition(Node*& head, int val, int pos) {
    if (pos <= 0) {
        return; // Invalid position
    }
    Node* newNode = createNode(val);
    if (pos == 1) {
        newNode->next=head;
        head->prev=newNode;
        return;
    }
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next; // Traverse to the position
    }
    if (temp == nullptr) {
        cout << "Position out of bounds." << endl;
        delete newNode; // Clean up memory
        return;
    }
    newNode->next = temp->next; // Link newNode to the next node
    newNode->prev = temp; // Link newNode to the previous node
    if (temp->next != nullptr) {
        temp->next->prev = newNode; // Update the next node's previous pointer
    }
    temp->next = newNode; // Link the previous node to newNode
}

// Function to traverse the list forward
void traverseForward(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to traverse the list backward
void traverseBackward(Node* head) {
    if (head == nullptr) return; // If the list is empty, return
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next; // Move to the last node
    }
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev; // Move backward
    }
    cout << endl;
}

// Destructor to free memory
void freeMemory(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current; // Free the current node
        current = nextNode; // Move to the next node
    }
}

int main() {
    Node* head = nullptr; // Initialize head as null

    // Append elements to the list
    appendAtTheEnd(head, 10);
    appendAtTheEnd(head, 20);
    appendAtTheEnd(head, 30);

    cout << "List after appending at the end: ";
    traverseForward(head);

    // Append at the beginning
    appendAtTheBeginning(head, 5);
    cout << "List after appending at the beginning: ";
    traverseForward(head);

    // Insert at a specific position
    insertAtPosition(head, 15, 3);
    cout << "List after inserting 15 at position 3: ";
    traverseForward(head);

    // Traverse backward
    cout << "List in reverse order: ";
    traverseBackward(head);

    // Free memory
    freeMemory(head);
    return 0;
}
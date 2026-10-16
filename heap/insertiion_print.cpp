#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int heap[100]; // Array to represent the heap
int z = 0; // Current size of the heap

void insert(int val) {
    heap[++z] = val; // Insert the new value at the end of the heap
    int current = z; // Start with the last element
    while (current > 1) {
        int parent = current / 2;
        // If the current node is greater than the parent, swap them
        if (heap[parent] < heap[current]) {
            swap(heap[parent], heap[current]);
            current = parent; // Move up to the parent
        } else {
            break; // If the parent is greater, stop the loop
        }
    }
}

void print() {
    if (z == 0) {
        cout << "Heap is empty." << endl; // Check if the heap is empty
        return;
    }
    for (int i = 1; i <= z; i++) { // Start from index 1 to z
        cout << heap[i] << " "; // Print each element
    }
    cout << endl; // Print a newline at the end
}


void deleteNode() {
    if (z == 0) {
        cout << "Heap is empty, cannot delete." << endl;
        return;
    }
    // Replace the root of the heap with the last element
    heap[1] = heap[z--]; // Decrease the size of the heap
    int current = 1; // Start from the root
    // Heapify down
    while (current * 2 <= z) {
        int child = current * 2; // Left child
        // If the right child exists and is greater than the left child, use the right child
        if (child + 1 <= z && heap[child + 1] > heap[child]) {
            child++;
        }
        // If the current node is less than the largest child, swap them
        if (heap[current] < heap[child]) {
            swap(heap[current], heap[child]);
            current = child; // Move down to the child
        } else {
            break; // If the current node is greater than or equal to the largest child, stop
        }
    }
    cout << "Root has been deleted." << endl;
}

void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Insert an element\n";
    cout << "2. Print heap\n";
    cout << "3. Exit\n";
    cout << "4. Delete root\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    int value;


    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: // Insertion
                cout << "Enter a number to insert: ";
                cin >> value;
                insert(value);
                cout << value << " has been inserted into the heap.\n";
                break;

            case 2: // Print heap
                cout << "Current heap:\n";
                print();
                break;

            case 3: // Exit
                cout << "Exiting the program.\n";
                return 0;

            case 4: //Delete root
                deleteNode();
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
    return 0;
}
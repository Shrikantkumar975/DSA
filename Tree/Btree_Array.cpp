#include <bits/stdc++.h>
#include <vector>

class BinaryTree {
private:
    std::vector<int> tree;  // Vector to store the binary tree

public:
    // Method to insert a value into the binary tree
    void insert(int value) {
        tree.push_back(value);
    }

    // Get the index of the left child
    int getLeftChildIndex(int index) {
        return 2 * index + 1;
    }

    // Get the index of the right child
    int getRightChildIndex(int index) {
        return 2 * index + 2;
    }

    // Get the index of the parent
    int getParentIndex(int index) {
        if (index == 0) {
            return -1; // Root node has no parent
        }
        return (index - 1) / 2;
    }

    // In-order traversal
    void inOrderTraversal(int index) {
        if (index >= tree.size()) return; // Base case: index out of bounds
        inOrderTraversal(getLeftChildIndex(index)); // Visit left child
        std::cout << tree[index] << " "; // Visit node
        inOrderTraversal(getRightChildIndex(index)); // Visit right child
    }

    // Pre-order traversal
    void preOrderTraversal(int index) {
        if (index >= tree.size()) return; // Base case: index out of bounds
        std::cout << tree[index] << " "; // Visit node
        preOrderTraversal(getLeftChildIndex(index)); // Visit left child
        preOrderTraversal(getRightChildIndex(index)); // Visit right child
    }

    // Post-order traversal
    void postOrderTraversal(int index) {
        if (index >= tree.size()) return; // Base case: index out of bounds
        postOrderTraversal(getLeftChildIndex(index)); // Visit left child
        postOrderTraversal(getRightChildIndex(index)); // Visit right child
        std::cout << tree[index] << " "; // Visit node
    }

    // Display the tree structure
    void display() {
        for (size_t i = 0; i < tree.size(); ++i) {
            std::cout << "Index " << i << ": " << tree[i] << std::endl;
        }
    }
};

// Example usage
int main() {
    BinaryTree bt;
    int data;
    while(true){
    std::cin>>data;
    if(data==-1)
    break;
    bt.insert(data); 
    }

    std::cout << "In-order Traversal: ";
    bt.inOrderTraversal(0);
    std::cout << std::endl;

    std::cout << "Pre-order Traversal: ";
    bt.preOrderTraversal(0);
    std::cout << std::endl;

    std::cout << "Post-order Traversal: ";
    bt.postOrderTraversal(0);
    std::cout << std::endl;

    return 0;
}
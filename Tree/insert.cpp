#include <iostream>
using namespace std;


class Node {
    public:
 char key;
    Node* left;
    Node* right;

    // Constructor to create a new node
    Node (char val) : key(val), left(nullptr), right(nullptr) {}
};

// Recursive insert function
Node* insert(Node* root, char val) {
    if (root == nullptr) {
        return new Node(val); // Create and return a new node
    }
    
    if (val < root->key) {
        root->left = insert(root->left, val); // Insert in the left subtree
    } else if (val > root->key) {
        root->right = insert(root->right, val); // Insert in the right subtree
    }
    
    return root; // Return unchanged root pointer
}

// Inorder traversal for testing
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}
void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->key << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->key << " ";
}
 int main() {
    Node* root = nullptr;
    
    // Inserting values into the BST
    char n;
    while(true){
        cin>>n;
        if(n=='a'){
            break;
        }
        root=insert(root,n);
    }
    
    cout << "Inorder Traversal: ";
    inorder(root); 
    cout<<endl;
    cout << "Preorder Traversal: ";
    preorder(root); 
    cout<<endl;
    cout << "Postorder Traversal: ";
    postorder(root); 
    cout<<endl;
    
    return 0;
}
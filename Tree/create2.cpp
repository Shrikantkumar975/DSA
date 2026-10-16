#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left=right=nullptr;
    }
 }; 

 Node* binaryTree(){
    int x;
    cin>>x;

    if(x== -1) return nullptr;
    Node *temp=new Node(x);
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left=binaryTree();
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right=binaryTree();
    return temp;
 }

 int main(){
    cout<<"Enter the root Node: ";
    Node *root;
    root = binaryTree();
 }

  
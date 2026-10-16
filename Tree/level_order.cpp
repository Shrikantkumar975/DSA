#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int val){
        data=val;
        left=right=nullptr;
    }
};

vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    if(root==nullptr) return ans;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            Node* temp=q.front();
            q.pop();
            if(temp->left != nullptr) q.push(temp->left); 
            if(temp->right != nullptr) q.push(temp->right); 
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    return ans;
}

Node* BinaryTree(){
    int x;
    cin>>x;

    if(x==-1) return nullptr;

    Node* temp = new Node(x);
    cout<<"Enter the left child of "<<temp->data<<" :";
    temp->left = BinaryTree();
    cout<<"Enter the right child of "<<temp->data<<" :";
    temp->right = BinaryTree();

    return temp;
}

void preorder(Node* root){
    if(root == nullptr){
        return;
    }

    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
    
}

void inorder(Node* root){
    if(root == nullptr){
        return;
    }

    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);

}

void postorder(Node* root){
    if(root == nullptr){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

int main(){
    cout<<"Enter the root element: ";
    Node* root=BinaryTree();

    vector<vector<int>> ans=levelOrder(root);

    for(auto a: ans){
        cout<<"[ ";
        for(auto s: a){
            cout<<s<<" ";
        }
        cout<<"]";
        cout<<endl;
    }

    cout<<"Tree in preOrder: ";
    preorder(root);
    cout<<endl;
    cout<<"Tree in inOrder: ";
    inorder(root);
    cout<<endl;
    cout<<"Tree in postOrder: ";
    postorder(root);

}

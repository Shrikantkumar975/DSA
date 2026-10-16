 #include<bits/stdc++.h>
using namespace std;

vector<int> v;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left=right=nullptr;
    }
 }; 

void preorder(Node *root){
    if(root==nullptr) return;
    // cout<<root->data<<" ";

    int temp=root->data;
    int sum=0;
    while(temp>0){
        int s=temp%10;
        sum+= s*s*s;
        temp/=10;
    }
    if(sum==root->data){
        v.push_back(root->data);
    }
    else{
        cout<<"No is rejected";
    }

    if(root->data%2==0){
    v.push_back(root->data);
    }
    preorder(root->left);
    preorder(root->right);
}



void display(){
}

void inorder(Node *root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}

 Node* binaryTree(){
    int x;
    cin>>x;

    if(x == -1) return nullptr;
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

    preorder(root);
    cout<<endl;
    for(auto a: v){
        cout<<a<<" ";
  }
    // inorder(root);
    // cout<<endl;
    // postorder(root);
 }

  
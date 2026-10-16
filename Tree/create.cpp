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

 int main(){
    int x,first,second;
    cin>>x;
    queue<Node*> q;

    Node *root = new Node(x);
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();


        cout<<"Give value left of "<<temp->data<<" : ";
        cin>>first;
        if(first!=-1){
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout<<"Give value right of "<<temp->data<<" : ";
        cin>>second;
        if(second!=-1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }


 } 
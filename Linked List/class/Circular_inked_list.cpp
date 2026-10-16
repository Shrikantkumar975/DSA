#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
void appendNode (node*&tail, int data){
    node*newNode = new node();
    newNode->data = data;
    newNode->next = newNode;
    if(tail==nullptr)
    {
        tail = newNode;
    }
    else{
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}
void printList(node*tail){
    node*temp = tail->next;
    do{
       cout << temp->data << " ";
       temp = temp->next;
    }while(temp!=tail->next);
}
int main()
{
    int n, i;
    cout << "Enter number of nodes";
    cin >> n;
    node*tail = nullptr;
    int data;
    for(i=0;i<n;i++)
    {
        cin >> data;
        appendNode(tail, data);
    }
    printList(tail);
}
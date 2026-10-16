#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void appendNode(node*&tail,int data){
    node* newNode = new node();
    newNode->data = data;
    newNode->next=newNode;
    if(tail==nullptr)
    tail = newNode;
    else{
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteNode(node*&tail){
    node* temp=tail->next;
    while(temp->next->next!=tail->next){
        temp=temp->next;
    }

    node* temp2 = temp->next;
    temp->next = tail->next;
    tail = temp;
    delete(temp2);
}

void deleteNodeFromBegin(node*&tail){
    node*temp=tail->next;
    tail->next=temp->next;
    delete(temp);
}

void printList(node*tail){
    node*temp=tail->next;
    do{
        cout << temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail->next);
}

int main(){
    int n;
    cin >> n;
    node*tail=nullptr;
    int data;
    for(int i=0;i<n;i++){
        cin >> data;
        appendNode(tail,data);
    }
    printList(tail);
    cout <<endl;
    deleteNode(tail);
    printList(tail);
    cout <<endl;
    deleteNodeFromBegin(tail);
    printList(tail);
    cout << endl;


}
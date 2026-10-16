#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }

    Node(int data1,Node* next1){
        data=data1;
        next=next1;

    }
};

void print_LL(Node* head){
    while(head != NULL){
        cout << head->data<<" ";
        head = head->next;
    }
}
void pairwise_swap(Node* head) {
    if (!head || !head->next) return;

    Node* temp = head;
    while (temp && temp->next) {
        swap(temp->data, temp->next->data);
        temp = temp->next->next;
    }
}
int main(){
    // Creating nodes
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next= new Node(60);

    //10 20 30 40 50 60 
    //10 60 20 50 30 40

    // Printing the linked list
    print_LL(head);
    cout<<endl;
    pairwise_swap(head);
    Node* start = head;
    Node* end = head;

    // Move `end` to the last node
    while (end->next) {
        end = end->next;
    }

    while (start != end && start->prev != end) {
        cout << start->data << " " << end->data << " ";
        start = start->next;
        end = end->prev;
    }

    // If there's a middle node in case of odd number of nodes
    if (start == end) {
        cout << start->data;
    }
    cout<<endl;
    print_LL(head);
    return 0;
}
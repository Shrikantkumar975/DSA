#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node* createNode(int data){
    node* newNode=new node();
    newNode->data=data;
    newNode->next=nullptr;
    return newNode;
}

void traverseSinglyLinkedList(node *head){

    node* temp=head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}

void appendAtthebegining(node *&head,int val){
    node* newNode = createNode(val);

    newNode->data=val;

    newNode->next=head;
    head=newNode;
}

void appendAttheend(node *&head,int val){
    node* newNode = createNode(val);

    node* current = head;

    while(current->next != NULL){
        current = current->next;
    }

    current->next = newNode;
}

void appendAtAnyPosition(node* head,int val,int pos){
    if(pos<=0){
        return;
    }

    node*newNode=createNode(val);

    node* temp=head;

    while(--pos){
        temp=temp->next;
    }

    newNode->next=temp->next;
    temp->next=newNode;
}


int main(){
    // node *first = new node();
    // node *second = new node();
    // node *third = new node();
    // node *third = new node();
    // node *third = new node();

    // first->data=7;
    // second->data=9;
    // third->data=11;

    // first->next=second;
    // second->next=third;
    // third->next=NULL;


    int n;
    cout << "Enter how many element you want: ";
    cin >> n;

    node* head = NULL;  // created a null pointer variable

    for(int i=0;i<n;i++){
        int data;
        cout << "Enter "<<i+1<<" : ";
        cin >> data; // taking every element using looop
        node*temp=head; // creating temporary pointer variable that store head address;
        if(head == NULL){
            head = createNode(data);
            // node*newNode=new node(); // created a memory space for a newNode
            // newNode->data=data; //giving data to newNode data
            // newNode->next=nullptr; // and next point to null
            // head=newNode; // now head have this newNode address
        }
        else{
            while(temp->next != NULL){
                temp=temp->next;
            }
            temp->next = createNode(data);
            // node*newNode=new node(); // created a memory space for a newNode
            // newNode->data=data; //giving data to newNode data
            // newNode->next=nullptr; // and next point to null
            // temp->next=newNode; // now head have this newNode address
        }

    }
    cout<<"Enter a number you want to enter at first ";
    int m;
    cin >> m;

    appendAtthebegining(head,m);
    // node* newNode = new node();
    // newNode->data=m;
    // newNode->next=head;
    // head=newNode;

    traverseSinglyLinkedList(head);
    // node *temp=head;

    // cout << endl;
    appendAtAnyPosition(head,6,2);
    // while(temp!=NULL){
    //     cout <<temp->data<<" ";
    //     temp = temp->next;
    // }
    traverseSinglyLinkedList(head);
}
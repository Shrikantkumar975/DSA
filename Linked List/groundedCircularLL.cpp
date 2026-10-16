#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* createHeader(){
    node* header = new node();
    header->data=0;
    header->next=header;
    return header;
}

void appendNode(node*header,int data){
    node* newNode=new node();
    newNode->data=data;
    newNode->next=header;
    node* temp=header;
    while(temp->next!=header){
        temp=temp->next;
    }
    temp->next=newNode;
    header->data++;
    
}

void appendNodeAtBeg(node*header,int data){
    node* newNode=new node();
    newNode->data=data;
    newNode->next = header->next;
    header->next=newNode;
}

void deleteNode(node*&header){
    node*temp=header;
    while(temp->next->next!=header){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=header;
}

void deleteNodeAtBeg(node*&header){
    node*temp=header->next;
    header->next=temp->next;
    delete temp;
}

void printList(node*header){
    node*temp=header->next;
    do{
        cout << temp->data<<" ";
        temp = temp->next;
    }while(temp!=header);
}

int main(){
    node*header = createHeader();
    cout << "Enter number of nodes ";
    int n;cin>>n;
    int data;
    for(int i=0;i<n;i++){
        cin >> data;
        appendNode(header,data);
    }

    printList(header);
    cout <<endl;
    appendNodeAtBeg(header,9);
    printList(header);
    cout <<endl;

    deleteNode(header);
    printList(header);
    cout <<endl;
    deleteNodeAtBeg(header);
    printList(header);

}
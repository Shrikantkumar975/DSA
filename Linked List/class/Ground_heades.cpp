#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node* next;
};

node* initialiseHeader(){
    node* header = new node();
    header->data=0;
    header->next =nullptr;
    return header;
}

void appendNode(node* header,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=nullptr;
    node* temp=header;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newnode;
    header->data++;
}

void appendNodeAtBegining(node*header,int data){
    node*newnode=new node();
    newnode->data=data;
    newnode->next=header->next;
    header->next=newnode;
    header->data++;
}

void appendNodeAtChoice(node*header,int pos,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=nullptr;
    node* temp=header->next;
    for(int i=0;i<pos-1 && temp->next!=nullptr;i++){
        temp=temp->next;
    }
    if(temp->next==nullptr){
        cout<<"Invalid";
        return;
    }

    if(pos==1){
        newnode->next=header->next;
        header->next=newnode;
        header->data++;
        return;

    }
    newnode->next=temp->next;
    temp->next=newnode;
    header->data++;
    
}

void printList(node* header){
    node*temp=header;
    while(temp){
        cout <<temp->data<<" ";
        temp=temp->next;
    }

}

int main(){
    node* header=initialiseHeader();
    int n;
    cin >> n;
    
    int data;
    for(int i=0;i<n;i++){
        cin >> data;
        appendNode(header,data);
    }

    cout << endl;
    printList(header);
}

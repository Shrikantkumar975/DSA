#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = NULL;
    }

};

void traverseLinkedList(Node* head){

    Node* temp = head;

    while(temp){

        cout << temp->data<<" ";

        temp=temp->next;
    }
}

Node* insertAttheBeginning(Node* &head,int value){

    Node* newNode = new Node(value);

    newNode->next= head;

    head = newNode;

    return head;
}

Node* insertAttheEnd(Node* head,int value){

    Node* newNode =new Node(value);

    if(head == NULL) {
        head = newNode;
        return head;
    }

    Node* temp = head;

    while(temp->next){
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

Node* insertPos(Node* head, int pos, int data){
    if(head == NULL){
        if(pos == 1) return new Node(data);
        else return NULL;
    }
    if(pos==1){
         Node* newNode = new Node(data);
         newNode->next = head;
         head = newNode;
         return head;
    }
    Node* newNode = new Node(data);
    int count = 1;
    Node* temp=head;
    Node* prev=NULL;
    while(temp){
        if(count == pos){
            prev->next=newNode;
            newNode->next=temp;
            break;
        }
        prev=temp;
        temp=temp->next;
        count++;
    }
    return head;
}
Node* insertBeforeEle(Node* head, int data , int ele){
    if(head == NULL){
        if(head->data == ele) return new Node(data);
        else return NULL;
    }
    if(head->data==ele){
         Node* newNode = new Node(data);
         newNode->next = head;
         head = newNode;
         return head;
    }
    Node* newNode = new Node(data);
    // int count = 1;
    Node* temp=head;
    Node* prev=NULL;
    while(temp){
        if(temp->data==ele){
            prev->next=newNode;
            newNode->next=temp;
            break;
        }
        prev=temp;
        temp=temp->next;
        // count++;
    }
    return head;


}
Node* insertAfterEle(Node* head, int data , int ele){
    if(head == NULL){
        if(head->data == ele) return new Node(data);
        else return NULL;
    }
    if(head->data==ele){
         Node* newNode = new Node(data);
        //  newNode->next = head;
         head->next= newNode;
         return head;
    }
    Node* newNode = new Node(data);
    // int count = 1;
    Node* temp=head;
    Node* prev=NULL;
    while(temp){
        if(temp->data==ele){
            newNode->next=temp->next;
            // prev->next=newNode;
            // newNode->next=temp;
            temp->next=newNode;
            break;
        }
        // prev=temp;
        temp=temp->next;
        // count++;
    }
    return head;


}

int main(){
    Node* head = NULL;
    // = new Node(10);
    for(int i=0;i<5;i++){
        int a;
        cin >> a;
    head = insertAttheEnd(head,a);
    }
    // head = insertAttheEnd(head,30);
      
    // head = insertAttheBeginning(head,5);
    // head = insertAttheBeginning(head,0);

    // head = insertPos(head,3,15);
    head = insertAfterEle(head,50,7);

    traverseLinkedList(head);

    return 0;

}
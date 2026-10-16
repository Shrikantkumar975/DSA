#include<bits/stdc++.h>
using namespace std;

// struct Node{
//     public:
//     int data;
//     Node* next;
//     public:
//     Node(int data1, Node* next1){
//         data = data1;
//         next = next1;
//     }

//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };

class Node{
    public:
    int data;
    Node* next;
    public:
    // Node(int data1, Node* next1){
    //     data = data1;
    //     next = next1;
    // }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* converArr2LL(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int count=0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}

int checkIfPresent(Node* head,int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

Node* removeHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    free(temp); // or delete temp
    return head;
}

Node* removeTail(Node* head){
    if(head == NULL ||  head->next == NULL) return NULL;

    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;

    return head;
}

Node* removeAtPos(Node* head,int pos){
    if(head == NULL) return head;

    if(pos==1){
        Node* temp = head;
        head= head->next;
        free(temp);
        return head;
    } 
    int cnt = 1;
    Node* temp=head;
    Node* prev = NULL;
    while(temp){
        if(cnt == pos){
            prev->next=prev->next->next;
            free(temp);  
            break;
        }
        prev=temp;
        temp=temp->next;
        cnt++;
    }
    return head;
}
Node* removeEle(Node* head,int el){
    if(head == NULL) return head;

    if(head->data==el){
        Node* temp = head;
        head= head->next;
        free(temp);
        return head;
    } 
    Node* temp=head;
    Node* prev = NULL;
    while(temp){
        if(temp->data == el){
            prev->next=prev->next->next;
            free(temp);  
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

void reverseLL(Node*&head){
    Node* temp = head;
    Node* prev = nullptr;

    while(temp){
        Node* front = temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    head = prev;
}

void printLL(Node*head){
    Node*temp=head;
    while(temp){
        cout << temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    int n = 4;
    int arr[n]={12,5,8,7};
    // Node* y = new Node(arr[0]);
    // cout << y->next;
    Node* head = converArr2LL(arr,n);
    cout << head->data;
    cout <<endl;
    printLL(head);
    cout <<endl;

// to print every element of ll
    // Node* temp =head;
    // while(temp){
    //     cout << temp->data<<" ";
    //     temp=temp->next;
    // }

    // cout <<endl;
    // cout << lengthOfLL(head);
    // cout <<endl;
    // cout << checkIfPresent(head,8);
    // cout <<endl;

    // head=removeHead(head);

    // temp =head;
    // while(temp){
    //     cout << temp->data<<" ";
    //     temp=temp->next;
    // }

    // cout <<endl;
    // head=removeTail(head);
    // temp =head;
    // while(temp){
    //     cout << temp->data<<" ";
    //     temp=temp->next;
    // }

    // cout <<endl;
    // int pos=1;
    // head=removeAtPos(head,pos);
    // temp =head;
    // while(temp){
    //     cout << temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout <<endl;
    // int ele=8;
    // head=removeEle(head,ele);
    // temp =head;
    // while(temp){
    //     cout << temp->data<<" ";
    //     temp=temp->next;
    // }
    reverseLL(head);
    printLL(head);

}
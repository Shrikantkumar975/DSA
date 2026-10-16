/*Single File Programming Question
Problem Statement



Sharon is developing a character editor for a simple text-based game. The editor allows users to maintain a singly linked list of characters representing a sequence of moves in the game. 



Initially, users input a series of characters to create their move sequence. Later, they can insert a new character at a specific position within the sequence to alter their gameplay strategy, ensuring the list is updated and displayed correctly. Assist Sharon in the task.



Company tags: TCS

Input format :
The first line contains an integer n, the number of initial characters.

The second line consists of n characters, representing the initial move sequence.

The last line contains a character and an integer pos, representing the new move to be added and its position in the sequence.

Output format :
The first line displays "Current Linked List:" followed by the initial sequence of moves in the next line.

The third line displays "Updated Linked List:" followed by the updated sequence of moves after inserting the new move at the specified position in the next line.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 10

Sample test cases :
Input 1 :
6
A B C D E F
G 7
Output 1 :
Current Linked List:
A B C D E F 
Updated Linked List:
A B C D E F G 
Input 2 :
3
A O B
M 1
Output 2 :
Current Linked List:
A O B 
Updated Linked List:
M A O B 
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    node*next;
};

node* createNode(char value){
    node* newNode = new node();
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}

void printList(node*&head){
    node* temp=head;
    while(temp){
        cout <<temp->data<<" ";
        temp=temp->next;
    }
}

void insertAtthePos(node*&head,int pos,char data){
    node* newNode = createNode(data);
    
    if(pos == 0){
        newNode->next=head;
        head = newNode;
    }
    else{
        node* temp = head;
        for(int i=0;i<pos-1;i++){
            temp = temp->next;
            if(temp == NULL){
                return;
            }
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int main(){
    int n;
    cin >> n;
    
    node* head=NULL;
    
    for(int i=0;i<n;i++){
        char data;
        cin >>data;
        node*temp=head;
        if(head==NULL){
            head = createNode(data);
        }
        else{
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = createNode(data);
        }
        
    }
    cout<<"Current Linked List: "<<endl;
    printList(head);
    
    char chara;
    int n1;
    
    cin >> chara >> n1;
    
    insertAtthePos(head,n1-1,chara);
    
    cout<<"Updated Linked List: "<<endl;
    printList(head);
    
}

/*
Single File Programming Question
Problem Statement



Alice is preparing for a coding competition and wants to practice her skills with linked lists. She decides to write a program that allows her to create a linked list by inserting elements at the front. 



Help Alice with her task.



Company tags: HCL

Input format :
The first line of input consists of an integer n, representing the number of elements to be inserted.

The second line of input consists of n space-separated integers, representing the elements to be inserted in the linked list.

The third line of input consists of an integer m, representing the value to be inserted at the front of the linked list.

Output format :
The first line of output displays "Created Linked list: " followed by the elements of the linked list.

The second line of output displays "Final List: " followed by the elements of the linked list after inserting the new element at the front.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ n ≤ 10

1 ≤ elements, m ≤ 100

Sample test cases :
Input 1 :
5
6 5 4 3 2
1
Output 1 :
Created Linked list: 2 3 4 5 6 
Final List: 1 2 3 4 5 6 
Input 2 :
4
-10 20 -30 40
5
Output 2 :
Created Linked list: 40 -30 20 -10 
Final List: 5 40 -30 20 -10 */

// #include<bits/stdc++.h>
// using namespace std;

struct node{
    int data;
    node* next;
};

void createNode(node*&head,int val){
    node* newNode=new node();
    newNode->data=val;
    newNode->next=NULL;
    head = newNode;
}

void insertAtFirst(node*&head,int val){
    node* newNode = new node();
    newNode->data=val;
    newNode->next=head;
    head=newNode;
}

void print(node* &head){
    node* temp=head;
    while(temp){
        cout << temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int n;
    cin >> n;
    
    int a1;
    cin>>a1;
    
    
    node* head=NULL;
    
    createNode(head,a1);
    
    for(int i=1;i<n;i++){
        int val;
        cin >> val;
        
        insertAtFirst(head,val);
    }
    cout <<"Created Linked list: ";
    print(head);
    cout <<endl;
    
    int newNum;
    cin >> newNum;
    
    insertAtFirst(head,newNum);
    
    cout <<"Final list: ";
    print(head);
    cout <<endl;
}


/*
Single File Programming Question
Problem Statement



Vijay is creating a linked list and wants to perform different operations on it. She can append values either to the left (beginning) or right (end) of the linked list. She also wants to print the linked list at any point in time. 



He wants to be able to perform the following operations:

1: Append Left: Append a node at the beginning(left) of the linked list.

2: Append Right: Append a node at the end(right) of the linked list.

3: Print: Print the contents of the linked list.

4: Exit: Exit the program.



Company tags: Accenture

Input format :
The input consists of multiple lines. Each line starts with an integer choice representing the operation (1 to append left, 2 to append right, 3 to print, and 4 to exit).

If the choice is 1 or 2, it is followed by an integer n representing the value to be appended to the linked list separated by a space.

The input continues until the choice is 4.

Output format :
When the choice is 3, the output displays "Linked List: " followed by the values in the linked list separated by a space.

If the choice is invalid the output displays "Invalid choice".



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ n ≤ 100

Sample test cases :
Input 1 :
1 10
2 20
3
4
Output 1 :
Linked List: 10 20
Input 2 :
1 10
1 20
1 30
2 35
3 
4
Output 2 :
Linked List: 30 20 10 35
Input 3 :
5
4
Output 3 :
Invalid choice
*/

// You are using GCC
// #include <iostream>
// using namespace std;

struct Node {
    int val;
    Node* next;
};

void appendLeft(Node* &head, int val) {
    Node* newNode = new Node();
    newNode->val=val;
    newNode->next=head;
    head=newNode;
    
    
}

void appendRight(Node* &head, int val) {
    Node* newNode = new Node();
    newNode->val=val;
    newNode->next=NULL;
    
    Node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void print(Node* &head) {
    //Type your code here
    Node* temp = head;
    while(temp){
        cout << temp->val<<" ";
        temp=temp->next;
    }
    
}

int main() {
    Node* myList = nullptr;
    int choice;
    int val;

    do {
    cin >> choice;


    switch (choice) {
        case 1:
            cin >> val;
            appendLeft(myList, val);
            break;
        case 2:
            cin >> val;
            appendRight(myList, val);
            break;
        case 3:
            cout << "Linked List: ";
            print(myList);
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice" ;
    }

} while (choice != 4);


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int front = -1,rear = -1;

bool isEmpty(){
    if(front == -1){
        return true;
    }
    return false;
}

bool isFull(int n){
    if(front == 0 && rear == n-1 || front == rear-1) return true;
    return false;
}

void enqueueRear(int queue[],int n,int v){
    if(isFull(n)){
        cout <<"queue already full";
        return;
    }
    if(isEmpty()){
        front = rear = 0;
    }
    else if(rear == n-1){
        rear = 0;
    }
    else rear++;

    queue[rear]==v;
    cout << v <<" is inserted\n";
}


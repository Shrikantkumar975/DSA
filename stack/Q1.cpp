// Create a stack object:
// Check the stack is empty or not? 1

// Insert some elements onto the stack:

// Stack elements: 4 5 6 7 

// Remove an element from the stack! 4
// Stack elements: 5 6 7 

// Top of the element of the stack:
// 5

#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> s;

    if(s.empty()){
        cout << "Stack is empty"<<endl;
    }

    s.push(10);
    s.push(5);
    s.push(12);
    s.push(7);

    stack<int> s1 = s;

    while(!s1.empty()){
        cout << s1.top()<<" ";
        s1.pop();
    }
    cout <<endl;
    cout << "Removed element: "<<s.top()<<endl;
    s.pop();

    
    s1 = s;

    while(!s1.empty()){
        cout << s1.top()<<" ";
        s1.pop();
    }

    // cout << " "<<s.top()<<endl;

}
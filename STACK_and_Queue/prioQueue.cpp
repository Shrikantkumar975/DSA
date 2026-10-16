// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int , int > m;
//    int n ;
//    cin >> n ;
//    for(int i = 0 ; i < n ; i++){
//     int value , key ;
//     cin >> value>> key;
//     m[key] = value;
//    } 

//    for(auto a:m){
//     cout<<a.second<<" ";
//    }
   
//    auto a = m.begin();
//    m.erase(a);

//    for(auto i=m.rbegin();i != m.rend();i++){
//     cout<<i->second<<" ";
//    }


// } 



#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Insertion
    q.push(10);
    q.push(20);
    q.push(30);

    // Accessing elements
    cout << "Front element: " << q.front() << endl; // Outputs 10
    cout << "Back element: " << q.back() << endl;   // Outputs 30

    // Size
    cout << "Size of queue: " << q.size() << endl;  // Outputs 3

    // Deletion
    q.pop(); // Removes the front element (10)
    cout << "Front element after pop: " << q.front() << endl; // Outputs 20

    // Check if the queue is empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Outputs No

    return 0;
}



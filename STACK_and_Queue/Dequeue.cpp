#include <iostream>
#include <deque>
using namespace std;
void showDeque(deque<int> dq) {
    for (int elem : dq) {
        cout << elem << " ";
    }
    cout << endl;
}
int main() {
    deque<int> dq;
    // Inserting elements at the back
    dq.push_back(10);
    dq.push_back(20);

    // Inserting elements at the front
    dq.push_front(5);
    dq.push_front(1);

    cout << "The deque is: ";
    showDeque(dq);

    // Accessing elements
    cout << "Element at index 2: " << dq.at(2) << endl;
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // Removing elements from the front and back
    dq.pop_front();
    dq.pop_back();

    cout << "The deque after popping front and back: ";
    showDeque(dq);

    return 0;
}

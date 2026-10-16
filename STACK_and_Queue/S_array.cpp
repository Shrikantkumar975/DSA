#include <iostream>
using namespace std;
void push(int stack[], int data, int MAX, int &top)
{
    if (top >= MAX - 1)
    {
        cout << "Stack Full" << endl;
    }
    else if (top == -1)
    {
        top++;
        stack[top] = data;
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

void pop(int stack[],int &top) {
    if (top == -1) {
        cout << "Stack Empty" << endl;
    } else {
        int data = stack[top];
        top--;
        cout << "Data deleted: " << data << endl;
    }
}

void display(int stack[],int top) {
    if (top == -1) {
        cout << "Stack empty" << endl;
    } else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int top = -1, MAX, data;
    cout << "Enter the size of the stack: ";
    cin >> MAX;
    int stack[MAX];
    for (int i = 0; i < MAX; i++)
    {
        cin >> data;
        push(stack, data, MAX, top);
    }
    display(stack, top);
    pop(stack,top);
    display(stack, top);
    return 0;
}


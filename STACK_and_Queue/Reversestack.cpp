#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    int n,data;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        s.push(data);
    }
    stack<int> temp = s;
    while(!temp.empty()){
        cout << temp.top() <<" ";
        temp.pop();
    }
    stack<int> s1;
    while (!s.empty())
    {
        s1.push(s.top());
        s.pop();
    }
    cout<<endl;
    stack<int> temp1 = s1;
    while(!temp1.empty()){
        cout << temp1.top() <<" ";
        temp1.pop();
    }
}
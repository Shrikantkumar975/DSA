#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    int n,data;
    cin>>n;
    for(int i = 0;i<n;i++){ //for taking value
        cin>>data;
        
        s.push(data);
    }
    stack<int> temp = s; // this is the way to assign stack
    while(!temp.empty()){ // for display
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    // now we are appling logic
    stack<int> temp1; // making another stack
    int check=n;
    while(!s.empty()){ // for display
        if(check==(n+1)/2){
            s.pop();
            }
        temp1.push(s.top());
        s.pop();
        check--;
    }

cout <<endl;

    while(!temp1.empty()){ // for display
        cout<<temp1.top()<<" ";
        temp1.pop();
    }
}
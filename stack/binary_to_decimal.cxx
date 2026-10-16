#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i++){
            stack<int> s;
            int j=i;
        while(j>0){
            if(j%2==0) s.push(0);
            else s.push(1);
            j/=2;
        }
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
        cout <<" ";
    }
}
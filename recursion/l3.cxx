#include<bits/stdc++.h>
using namespace std;

void arraySwap(int l,int arr[],int r){
    
    if(l>=r) return;
    swap(arr[l],arr[r]);
    arraySwap(l+1,arr,r-1);
    }

bool palindrome(int i,string s){
    int n = s.size();
    if(i>=n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return palindrome(i+1,s);
}

int main(){
    int arr[5]={2,4,6,7,5};

    arraySwap(0,arr,4);

    for(auto i:arr) cout << i << " ";

    string s ="123";

    bool f = palindrome(0,s);
    cout << f;
}
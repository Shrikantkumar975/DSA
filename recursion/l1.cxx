#include<bits/stdc++.h>
using namespace std;

void name(int num){
    if(num<0) return;
    cout << "Sanjana I LOve you" << "\n";
    num--;
    name(num);
}

void print1_n(int i,int num){
    if(i>num) return;
    cout << i << " ";
    print1_n(i+1,num);
}

void printn_1(int i,int num){
    if(i<1) return;
    cout << i << " ";
    printn_1(i-1,num);
}

void print1_n_backtraking(int i,int num){
    if(i<1) return;
    print1_n_backtraking(i-1,num);
    cout << i << " ";
}

void printn_1_backtraking(int i,int num){
    if(i>num) return;
    printn_1_backtraking(i+1,num);
    cout << i << " ";
}


int main(){
    int num=49;
    name(num);
    
    // printn_1(num,num);
    // print1_n_backtraking(num,num);
    // printn_1_backtraking(1,num);
}
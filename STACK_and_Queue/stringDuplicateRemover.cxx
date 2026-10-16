#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    for(int i=0;i<str.length()-1;i++){
        if(str[i]=='!'){
            continue;
        }
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                str[j]='!';
            }
        }
    }
    
    for(int i=0;i<str.length();i++){
        if(str[i]!='!'){
            cout << str[i];
        }
    }

}
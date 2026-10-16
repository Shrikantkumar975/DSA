#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; // 5
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i]; // [2,3,2,3,2]
    }

    int hash[12]={0}; // [0,0,0,0,0,0,0,0,0,0,0,0,]

    for(int i =0 ;i<n;i++){
        hash[arr[i]]++; // hash[2]++ -> [0,0,1,0,0,0,0,0,0,0,0]
        // hash[3]++ -> [0,0,1,1,0,0,0,0,0,0]
        //hash[2]++ -> [0,0,2,1,0,0,0,0,0,0]
        
    }

    for(int i=0;i<12;i++){
        if(hash[i]>0)
        cout <<i<<": "<< hash[i]<<" "<<endl;
    }

    // int q;
    // cin >> q;

    // while(q--){
    //     int  number;
    //     cin >> number;

    //     cout << hash[number] << endl;;
    // }

}
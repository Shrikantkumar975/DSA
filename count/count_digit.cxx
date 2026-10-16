#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++) cin >> arr[i];
    // for(int i=0;i<n;i++){
    //     int count=1;
    //     if(arr[i]==-1) continue;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i] == arr[j]){
    //             count++;
    //             arr[j] = -1;
    //         }
    //     }
    //         cout << arr[i] <<": "<<count <<" times."<<endl;
    // }
// ROTATING AN ARRAY
// 1 2 3 4 5
// 5 1 2 3 4
// 4 5 1 2 3

    // Method 1

    rotate(arr,arr+2,arr+n);

    for(int i=0;i<n;i++) cout << arr[i] << " ";


cout <<endl;
    int k = 2;

    // Method 2

    for(int i=0;i<k;i++){
        int temp=arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }

    for(int i=0;i<n;i++) cout << arr[i] << " ";
cout <<endl;

// Method 3
int temp[n];
int c =0 ; // c = 0;
for(int i=n-k-1;i<n;i++){
    temp[c]=arr[i]; // temp = []
    c++;
}
    for(int i=0;i<n;i++) cout << temp[i] << " ";
}
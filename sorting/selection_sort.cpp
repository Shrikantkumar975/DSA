// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Size of array: ";
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){ // time complexity = O(n);
        cout << "arr["<<i<<"]";
        cin >> arr[i];  
    }


    for(int i=0;i<n-1;i++){ // descending Order
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]) min=j;
            int temp=arr[j];
            arr[j]=arr[min];
            arr[min]=temp;
        }
    }

    //ascending order
    for(int i=0;i<n-1;i++){ // time complexity O(n-1)
        int min=i; 
        for(int j=i+1;j<n;j++){  // time complexity [n + n-1 + n-2 + n-3 +...........2 + 1] = n(n-1)/2
            if(arr[j]<arr[min]) min=j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    // total time complexity of these loops = O(n^2) 

    for(int i=0;i<n;i++){ // time complexity = O(n)
        cout << arr[i] << " ";
    }
}

//total time complexity = O(n^2 + n + n) = O(n^2)
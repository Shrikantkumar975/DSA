#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }


        while(arr[j]>pivot && i>low){
            j--;
        }
        

        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(int arr[],int low,int high){
    if(low<high){
        int pIdx=partition(arr,low,high);
        qs(arr,low,pIdx-1);
        qs(arr,pIdx+1,high);
    }
}

int main(){
    int arr[]={4,6,3,5,2,1,7,5};
    qs(arr,0,7);

    for(auto a: arr){
        cout<<a<<" ";
    }
}
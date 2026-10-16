// You are using GCC
#include<iostream>
using namespace std ; 
int main(){
    int n ;
    cin>> n ; 
    int arr1[n];
    for(int i = 0 ; i < n ; i++){
        cin>> arr1[i];
    }
    int m;
    cin>> m; 
    int arr2[m];
    for(int i = 0 ; i < m ; i++){
        cin>> arr2[i];
    }
    int max = (n>m)?n:m;
    int arr3[max];
    int minlen=(n<m)?n:m;
    int a ;
        for(int j = 0 ; j < minlen ; j++){ // arr3 = [_ _ _ _] arr1 = [_ _ _ _] arr2 = [_ _ _]
             arr3[j] = arr1[j] + arr2[j];
        }
        if(n>m){
        for(int i=m;i<n;i++){
            arr3[i] = arr1[i];
        }
        }
        else if(m>n){
        for(int i=n;i<m;i++){
            arr3[i] = arr2[i];
        }
            
        }

        for(int i=0;i<max;i++) cout << arr3[i] <<" ";
    return 0 ; 
}
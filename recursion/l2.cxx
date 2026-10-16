#include <bits/stdc++.h>
using namespace std;

int sum_upto_N(int num,int sum){
    if(num<1) return sum ;
    sum_upto_N(num-1,sum+num);
}

int sum_upto_n(int n){
    if (n==0) return 0;
    return n + sum_upto_n(n-1);
}

int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}

int main(){
    int num=10;
    int sum=0;
    // cout << sum_upto_N(num,sum) << endl <<endl;
    // cout << sum_upto_n(10);

    cout << factorial(5);
}
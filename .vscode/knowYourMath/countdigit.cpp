#include<bits/stdc++.h>
using namespace std;

void count_digit(int n){
    int count = 0;
    while(n>0){
        count++;
        n/=10;
    }

    // count = (int)(log10(n)+ 1);

    cout << count << endl;
}

void printDivisor(int n){
    vector <int> ls;

    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
        if(n/i != i) ls.push_back(n/i);
        }

    }
    sort(ls.begin(),ls.end());

    for(auto it:ls) cout << it << " ";
}

void primeCheck(int n){
    int count=0;
     for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
        if(n/i != i) count++;
        }
    }
        if(count == 2) cout << "Prime";
        else cout << " not a Prime";

}


void gcd(int n1,int n2){


    while(n1>0 && n2>0){
        if(n1>n2) n1%=n2;
        else n2%=n1;
    }

    if(n1==0) cout << n2 << " ";
    else cout << n1 << " ";


    // int gcd=1;
    // for(int i=min(n1,n2);i>0;i--){
    //     if(n1%i==0 && n2%i==0){
    //         gcd=i;
    //         break;
    //     }
    // }
    // cout << gcd << endl;
}

int main(){
    int n;

    n= 45674;
    // count_digit(n);
    // printDivisor(2345);
    // primeCheck(68);
    int a=5;
    int b=40;
    gcd(a,b);
}
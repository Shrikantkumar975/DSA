#include<bits/stdc++.h>
using namespace std;

void TOH(int n,char source,char aucilliary,char destination){
    if(n==1) {
        cout<<"Move dist 1 from "<<source<<" to "<<destination<<endl;
        return;
    }

    TOH(n-1,source,destination,aucilliary);
        cout<<"Move disk "<< n<<" from "<<source<<" to "<<destination<<endl;

    TOH(n-1,aucilliary,source,destination);



}

int main(){
    int n;
    cin>>n;
    
    TOH(n,'A','B','C');
}
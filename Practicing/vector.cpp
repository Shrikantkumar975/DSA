#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int> v;

//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);

//     v.erase(v.begin()+2,v.end());

//     for(auto a: v){
//         cout<<a<<" ";
//     }

//     v.pop_back();
//     cout<<endl<<v.at(1);


// }

// int main(){
//     vector<int> v{1,2,5,0,3,1,7,0,5,2};
//     unordered_set<int> s;
//     s.insert(v.begin(),v.end());
//     vector<int> v1;
//     for(int i=1;i<v.size()-1;i++){
//         if(v[i]<v[i-1] && v[i]<v[i+1]){
//                 v1.push_back(v[i]);
//         }
//     }
//     sort(v.begin(),v.end());
//     auto last = unique(v.begin(),v.end());
//     v.erase(last,v.end());

//     for(auto a: s){
//         cout<<a<<" ";
//     }
// }

// 2 101 
// 4 203
// 1 103
// 5 209

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,pair<string,int>> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int a,b;
    string s;
    cin>>a>>b;
    cin>>s;

    m[a]=make_pair(s,b);
    }

    for(auto a = m.rbegin() ; a != m.rend() ; a++){
        cout<<a->second.first<<" "<<a->second.second;
    }
}
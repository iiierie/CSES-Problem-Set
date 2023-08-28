#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void hanoi(int n, int from , int to, int aux,vector<pair<int,int>> &v){
    if(n == 0){
        return;
    }

    hanoi(n-1,from,aux,to,v); //move from 1 to 2 using 3
    v.push_back({from,to});
    hanoi(n-1,aux,to,from,v);//move from 2 to 3 using 1
}

void solve(){
    int n;cin>>n;
    vector<pair<int,int>> v;
    hanoi(n,1,3,2,v);// 1 to 3 using 2
    cout<<v.size()<<endl;
    for(auto it:v){
        cout<<it.first<<" "<<it.second<<endl; 
    }
  
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
        int n ;cin>>n;
        set<int> s; 
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
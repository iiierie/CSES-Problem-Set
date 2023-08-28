#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    int n, m;cin>>n>>m;
    multiset<int> ticket;
    for(int i = 0 ;i<n;i++){
        int x;cin>>x;
        ticket.insert(x);
    }
    vi customer(m);
    for(int i = 0;i<m;i++){
        cin >> customer[i];
    }
    for(auto it:customer){
        auto lb = ticket.upper_bound(it);
        if(lb == ticket.begin()) cout<<-1<<endl;
        else{
            lb--;
            cout<<*(lb)<<endl;
            ticket.erase(lb);
        }
    }  
    
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
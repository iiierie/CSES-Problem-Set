#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    ll n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        ll not_allowed = 4 *1ll* (i-1) * (i-2);
        ll total = (i*1ll*i)*(i*1ll*i -1)/2;
        cout << total - not_allowed <<endl;    
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
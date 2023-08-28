#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;
const int m = 1e9+7;
ll power(ll a, ll b){
    ll result = 1;
    if(b == 0){
        return 1;
    }
    if(b < 0){
        a = 1/a;
        b *= -1;
    }
    while(b){
        if(b&1) 
        result = (result* a) % m;
        a = (a * 1ll * a) % m;
        b>>=1;
    }
       
    return result;
}
void solve(){
    ll n;cin>>n;
    cout<<power(2,n)<<endl;  
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
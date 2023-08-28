#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    int n;cin>>n;
    int zeros  = 0;
    for(int i = 5;i<=n;i=i*5){
        zeros +=  (n/i);
    }
    cout<<zeros<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
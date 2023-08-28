#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef map<int,int> mii;

void solve(){
        int n;cin>>n;
        vi arr(n-1);
        ll sum = 0;
        for(int i = 0;i<n-1;i++){
            cin>>arr[i];
            sum += arr[i];
        }

        ll total = ((n)*1ll*(n+1)) / 2;
        cout<<total-sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
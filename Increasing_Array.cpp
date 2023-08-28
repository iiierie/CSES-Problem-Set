#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    int n;cin>>n;
    vll arr(n);
    ll cnt = 0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 1;i<n;i++){
        while(arr[i] < arr[i-1]){
            cnt++;
            arr[i]++;
        }
    }
    cout<<cnt<<endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    int t;cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a > b) swap(a,b);

        if(a*2 < b){
            cout<<"NO"<<endl;
        }
        else if(a*2 == b){
            cout<<"YES"<<endl;
        }
        else {
            a = a % 3;
            b = b % 3;
            if((a == 0 && b == 0 ) || (a == 1 && b == 2) || (a==2 && b ==1)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
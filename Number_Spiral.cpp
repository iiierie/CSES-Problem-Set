#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    int t;cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;

        if(x>y){
            if(x % 2 == 0){
                ll temp = x*1ll*x;
                cout<<temp - y + 1<<endl;
            }
            else{
                ll temp = (x-1)*1ll*(x-1) + 1;
                cout<< temp + y - 1<<endl;
            }
        }
        else{
            if(y%2==1){
                ll temp = y*1ll*y;
                cout<<temp - x + 1<<endl;
            }
            else{
                ll temp = (y-1)*1ll*(y-1) + 1;
                cout<<temp + x - 1<<endl;
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
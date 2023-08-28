#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    ll n;cin>>n;
    ll sum = (n*1ll*(n+1))/2;
    vll s1,s2;
    if(sum % 2 != 0){
        cout<<"NO"<<endl;
        return;
    }
    ll mid = sum / 2;
    for(int i = n;i>0;i--){
        if(i <= mid){
            s1.push_back(i);
            mid = mid - i;
        }
        else{
            s2.push_back(i);
        }
    }
    cout<< "YES" <<endl;
    cout<<s1.size()<<endl;
    for(auto it:s1){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<s2.size()<<endl;
    for(auto it:s2){
        cout<<it<<" ";
    }

    
    
    

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef map<int,int> mii;

void solve(){
    string s;cin>>s;
    int count = 1;
    int ans = 1;
    for(int i = 0;i<s.size()-1;i++){
        if(s[i] == s[i+1]){
            count++;
            ans = max(count, ans);
        }
        else{
            count = 1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
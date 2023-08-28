#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    int n;
    cin>>n;
    vi arrival, depart;
    for(int i = 0;i<n;i++){
        int a, b;
        cin>>a>>b;
        arrival.push_back(a);
        depart.push_back(b);
    }
    sort(arrival.begin(), arrival.end());
    sort(depart.begin(), depart.end());
    int i = 0, j = 0;
    int count = 0;
    int ans = 0;
    while(i < n && j < n){
        if(arrival[i] <= depart[j]){
            count++;
            i++;
        }
        else{
            count--;
            j++;
        }
        ans = max(count,ans);
    }
    cout<<ans<<endl;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
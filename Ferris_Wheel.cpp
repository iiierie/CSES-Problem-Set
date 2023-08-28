#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
        int n , x;
        cin>>n>>x;
        vi arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int count = 0;
        sort(arr.begin(),arr.end());
        int i = 0;
        int j = n-1;
        while(i<=j){
            if((arr[i]+arr[j]) <= x){
                i++;
                j--;
                count++;
            }
            else{
                count++;
                j--;
            }
        }
        cout<<count<<endl;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vi a (n);
    vi b(m);
    for(int i = 0;i<n;i++){
        cin>>a [i];
    }
    for(int i = 0;i<m;i++){
        cin>>b[i];
    }
    int result = 0;
    sort(a .begin(), a .end());
    sort(b.begin(), b.end());

    int i = 0 , j = 0;


    while(i<n && j<m){
        if(abs(a[i] - b[j]) <= k){
            result++;
            i++;
            j++;
        }
        else{
            if((a[i] - b[j]) > k){
                j++;
            }
            else{
                i++;
            }
        }
    }
        cout<<result<<endl;
}
  



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
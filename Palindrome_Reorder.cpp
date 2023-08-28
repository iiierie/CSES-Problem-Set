#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    string s;
    cin>>s;
    string result;
    unordered_map <char,int> mp;
    for(auto it :s){
        mp[it]++;
    }

    int count = 0;
    char ch;
    for(auto it:mp){
        if(it.second % 2 == 1){
            count++; // odd count
            ch = it.first;
        }
    }

    if((s.size() % 2 == 0 && count != 0) || count > 1){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    else{
        for(auto it:mp){
            for(int i = 0; i < it.second/2;i++){
                result.push_back(it.first);
            }
        }
        cout<<result;
        if(s.size()%2) cout<<ch;
        reverse(result.begin(), result.end());
        cout<<result;
    }

    
    

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
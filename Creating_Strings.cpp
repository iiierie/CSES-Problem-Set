#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void permute(int i ,set<string>&st, string &s){
    if(i == s.size()-1){
        st.insert(s);
        return; 
    }
    for(int j = i;j<s.size();j++){
        swap(s[i],s[j]);
        permute(i+1,st,s);
        swap(s[i],s[j]);

    }
    
}


void solve(){
    // basically print out all the possible permutations of the string
    string s;
    set<string> st;
    cin>>s;
    permute(0,st,s);
    cout<<st.size()<<endl;
    for(auto it:st){
        cout<<it<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
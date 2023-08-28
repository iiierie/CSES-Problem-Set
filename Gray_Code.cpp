#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

string gray(string &binary){
    string result;
    result.push_back(binary[0]);

    for(int i = 1;i<binary.size();i++){
        int temp = binary[i-1] ^ binary[i];
        result.push_back((char)('0'+temp));
    }
    return result;
}

void solve(){
    int n;cin>>n;
    vector<string> binary;
    for(int i = 0;i<(1<<n);i++){
        bitset<32> b(i);
        binary.push_back(b.to_string().substr(32-n));
    }
    for(auto it:binary){
        // cout<<it<<endl;
        string g = gray(it);
        cout<< g<<endl;
    }
    
    
    

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
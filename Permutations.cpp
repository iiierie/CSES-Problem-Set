#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
   int n;
   cin>>n;
   vi v;
   if(n==1){
    cout<<1<<endl;
    return;
   }
   else if(n<4){
    cout<<"NO SOLUTION"<<endl;
    return;
   }
   else{
    int i = 2;    
    while(i<=n){ // push even
        v.push_back(i);
        i+=2;
    }
    i = 1;
    while(i<=n){ // push odd
        v.push_back(i);
        i+=2;
    }

    

    for(auto it:v){
        cout<<it<<" ";
    }

   }
    
    
    

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
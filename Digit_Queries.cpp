#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
    int t;cin>>t;
    while(t--){
        ll k ;
        cin>>k;
        if(k <= 9){
            cout<<k<<endl;
            continue;
        }
        vll power(19,1);
        for(int i= 1;i<19;i++){
            power[i] = (power[i-1]) * 10;
        }


        int numDigits = 0; // number of digits of our required number
        ll digits = 0; 
        ll prevdigits = 0;
        for(int i = 1;i<18;i++){
            digits += (power[i] - power[i-1]) * i;
            if(digits >= k){
                numDigits = i;
                break;
            }
            prevdigits = digits;
        }

        ll base = power[numDigits-1] - 1;
        ll remaining = k - prevdigits;
        ll offsetFromBase = remaining/numDigits;
        ll remainder = remaining % numDigits;
        ll actualNumber = base + offsetFromBase;

        if(remainder != 0){
            actualNumber++;
            ll rem = numDigits - remainder;
            while(rem--){
                actualNumber/=10;
            }
            cout<<actualNumber%10<<endl;
        }
        else{
            cout<<actualNumber%10<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
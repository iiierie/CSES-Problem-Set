// #include<bits/stdc++.h>
// using namespace std;
// typedef vector<int> vi;
// typedef long long ll;
// typedef vector<ll> vll;
// typedef map<int,int> mii;

// void subsequences(int i, int n , vi &temp,vi &arr, vector<vector<int>> &v){
//     if(i == n){
//         if(!temp.empty()) v.push_back(temp);
//         return;
//     }
//     temp.push_back(arr[i]);
//     subsequences(i+1, n,temp, arr, v);
//     temp.pop_back();
//     subsequences(i+1, n,temp, arr, v);
// }

// void solve(){
//     int n;cin>>n;
//     vi arr(n), temp(n);
//     ll sum = 0;
//     ll diff = LLONG_MAX;
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//         sum += arr[i];
//     }
//     vector<vector<int>> v;
//     subsequences(0,n,temp, arr,v);

//     for(auto it:v){
//         ll x = 0;
//         for(auto q:it){
//             x+=q;
//         }
//         cout<<endl;
//         diff = min(diff, abs(x - (sum-x)));
//     }
//     cout<<diff<<endl;
// }

// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     solve();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef vector<int> vi;
// typedef long long ll;
// typedef vector<ll> vll;
// typedef map<int, int> mii;
// int recur(int i,int n,vll &arr,  ll sum1, ll sum2){
//     if(i == n){
//         return labs(sum1-sum2);
//     }
//     int into_sum1 = recur(i+1, n, arr, sum1+arr[i], sum2);
//     int into_sum2 = recur(i+1, n, arr, sum1, sum2+arr[i]);
//     return min(into_sum1, into_sum2);
// }
// void solve()
// {
    
//         int n;
//         cin >> n;
//         vll arr(n);
//         for(int i= 0;i<n;i++){
//             cin>>arr[i];
//         }
//         cout << int(recur(0,n, arr, 0,0)) << endl;
// }


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     solve();
//     return 0;
// }


// using power set to generate all subsequences

#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

void solve(){
        int n;
        cin>>n;
        vll arr(n);
        ll diff = LLONG_MAX;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        for(int num = 0; num < (1<<n);num++){
            ll sum1 = 0;
            ll sum2 = 0;

            for(int i = 0;i<n;i++){
                //if bit set then take to sum1 else to sum2
                if(num & (1<<i)) sum1+= arr[i];
                else sum2+= arr[i];
            }
            diff = min(abs(sum1-sum2), diff);
        }
        cout<< int(diff)<<endl;
    }
    
    
    



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}




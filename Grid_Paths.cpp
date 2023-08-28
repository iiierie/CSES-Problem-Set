#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int,int> mii;

const int n = 7;
string grid;
bool visited[7][7];
int reserve[49];
int ans  = 0;


bool isoutside(int i){
    if(i < 0 || i >= 7){
        return true;
    }
    return false;
}

void checksteps(int i , int j, int steps){

    if(i == n-1 && j == 0){
        // if we are at end and the path isnt complete then return
        if(steps == 48){
            ans++;
    }
    return;
    } 
    


    if(((i == 0 || i == n-1 || j == 0 || j == n-1 || (visited[i+1][j] && visited[i-1][j])) &&  !isoutside(j-1) && !isoutside(j+1) && !visited[i][j+1] && !visited[i][j-1])){
        return;
    }
    if((i == 0 || i == n-1 ||j == 0 || j == n-1 || (visited[i][j+1] && visited[i][j-1])) && !isoutside(i-1) && !isoutside(i+1) && !visited[i-1][j] && !visited[i+1][j]){
        return;
    }
   

    visited[i][j] = true;



    if(grid[steps] != '?'){
        
        if(grid[steps] == 'U' && !isoutside(i-1)){
            if(!visited[i-1][j]){
                checksteps(i-1, j,steps+1);
                
            }
        }

        if(grid[steps] == 'R' &&  !isoutside(j+1)){
            if(!visited[i][j+1]){
                checksteps(i, j+1,steps+1);
                
            }
        }
        if(grid[steps] == 'D' &&  !isoutside(i+1)){
            if(!visited[i+1][j]){
                checksteps(i+1,j,steps+1);
            }
        }
        if(grid[steps] == 'L' &&  !isoutside(j-1)){
            if(!visited[i][j-1]){
                checksteps(i,j-1,steps+1);
            }
        }
    }
    else{
        // check all possibilities
        if( !isoutside(i-1)){
            if(!visited[i-1][j]){

                checksteps(i-1, j,steps+1);

            }
        }

        if( !isoutside(j+1)){
            if(!visited[i][j+1]){

                checksteps(i, j+1,steps+1);

            }
        }
        if(!isoutside(i+1)){
            if(!visited[i+1][j]){
                checksteps(i+1,j,steps+1);
            }
        }
        if(!isoutside(j-1)){
            if(!visited[i][j-1]){
                checksteps(i,j-1,steps+1);
            }
        }
    }
    visited[i][j] = false;
}


void solve(){
    cin>>grid;
    checksteps(0,0,0);
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    solve();
    return 0;
}
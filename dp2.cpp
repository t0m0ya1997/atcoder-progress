#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n, k;cin>>n>>k;
    ll h[n];rep(i,n)cin>>h[i];
    ll cost[n-1][k];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<k;j++){
            if(i+j+1<n)cost[i][j] = abs(h[i]-h[i+j+1]);
            else cost[i][j] = -1;
        }
    }
    ll f[n];
    for(int i=2;i<n-1;i++){
        vector<ll>tmp;
        for(int j=0;j<k;j++){
            if(cost[i][j]>=0)tmp.emplace_back(f[i-j]+cost[i-j][i-1-j]);
        }
        int index = min_element(tmp.begin(), tmp.end());
        f[i] = tmp[index];
    }
    co(f[n-1]);
}
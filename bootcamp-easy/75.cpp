#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,k;cin>>n>>k;
    int h[n];
    rep(i,n)cin>>h[i];
    sort(h,h+n);
    int ans = 1e9+1;
    rep(i,n-k+1){
        ans = min(ans,h[i+k-1]-h[i]);
    }
    co(ans);
}
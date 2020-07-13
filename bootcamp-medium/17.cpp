#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,t;cin>>n>>t;
    int s[n];rep(i,n)cin>>s[i];
    ll ans = 0;
    rep(i,n-1){
        ans+=min(t,s[i+1]-s[i]);
    }
    ans += t;
    co(ans);
}
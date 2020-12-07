#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    ll h[n];rep(i, n)cin>>h[i];
    pair<ll, ll>ps[n-1];
    for(int i=0;i<n-1;i++){
        ps[i].first = abs(h[i]-h[i+1]);
        if(i!=(n-2))ps[i].second=abs(h[i]-h[i+2]);
    }
    ll f[n];
    f[0] = 0;
    f[1] = ps[0].first;
    for(int i=2;i<n;i++){
        f[i] = min(f[i-2]+ps[i-2].second, f[i-1]+ps[i-1].first);
    }
    co(f[n-1]);
}

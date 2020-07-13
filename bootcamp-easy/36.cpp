#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,m;cin>>n>>m;
    int lmax=-1,rmin=1e5+1;
    rep(i,m){
        int l,r;cin>>l>>r;
        lmax = max(lmax, l);
        rmin = min(rmin, r);
    }
    co(max(0, rmin-lmax+1));
}
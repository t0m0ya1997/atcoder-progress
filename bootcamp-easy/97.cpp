#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    ll n,m;cin>>n>>m;
    pair<ll,ll> p[n];
    rep(i,n){
        ll a,b;cin>>a>>b;
        p[i] = make_pair(a,b);
    }
    sort(p,p+n);
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(m>p[i].second){ans+=p[i].first*p[i].second;m-=p[i].second;}
        else{ans+=p[i].first*m;break;}
    }
    co(ans);
}
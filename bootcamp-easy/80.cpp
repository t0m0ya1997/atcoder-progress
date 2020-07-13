#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    ll n;cin>>n;
    ll ans = 1e12;
    for(ll i=1;i*i<=n;i++){
        if(n%i!=0)continue;
        else ans = min(ans, (n/i)-1+i-1);
    }
    co(ans);
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "
int main(){
    ll n;cin>>n;
    ll ans = 1;
    for(int i=1;i<=n;i++){
        ans = i*ans%1000000007;
    }
    co(ans%1000000007);
}
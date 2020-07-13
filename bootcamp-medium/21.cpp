#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    ll a[n+1]={0};
    ll b[n]={0};
    rep(i,n){ll tmp;cin>>tmp;a[tmp]++;b[i]=tmp;}
    ll sum = 0;
    rep(i,n+1){
        sum+=a[i]*(a[i]-1)/2;
    }
    rep(i,n){
        ll ans = sum - a[b[i]] + 1;
        co(ans);
    }
}
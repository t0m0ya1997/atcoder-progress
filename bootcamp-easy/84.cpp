#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    int a[n+2],b[n+1];
    rep1(i,n+1)cin>>a[i];
    rep1(i,n)cin>>b[i];
    ll sum = 0;
    for(int i=1;i<=n;i++){
        sum+=min(a[i],b[i]);
        sum+=min(a[i+1],b[i]-min(a[i],b[i]));
        a[i+1]-=min(a[i+1], b[i]-min(a[i],b[i]));
    }
    co(sum);
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    ll n,x;cin>>n>>x;
    ll a[n];rep(i,n)cin>>a[i];
    sort(a,a+n);
    int cnt=0;
    bool flag = false;
    rep(i,n){
        x-=a[i];
        if(x>=0)cnt++;
    }
    co(x>0?max(0,cnt-1):cnt);
}
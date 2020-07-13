#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    ll x,y;cin>>x>>y;
    ll cnt=0;
    while(x<=y){
        cnt++;
        x*=2;
    }
    co(cnt);
}
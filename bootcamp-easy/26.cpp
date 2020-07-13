#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    ll h;cin>>h;
    int s = floor(log2(h));
    ll sum = 0;
    ll tmp = 1;
    rep(i,s+1){
        sum+=tmp;
        tmp*=2;
    }
    co(sum);
}
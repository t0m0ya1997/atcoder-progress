#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,m,x;cin>>n>>m>>x;
    int before=0,after=0;
    rep(i,m){
        int tmp;cin>>tmp;
        (tmp<x)?before++:after++;
    }
    co(min(before,after));
}
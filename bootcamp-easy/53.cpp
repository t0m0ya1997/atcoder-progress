#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,m;cin>>n>>m;
    int c[55]={0};
    rep(i,m){
        int a,b;cin>>a>>b;
        c[a]++;c[b]++;
    }
    rep1(i,n){
        co(c[i]);
    }
    
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,m,c;cin>>n>>m>>c;
    int b[m];rep(i,m)cin>>b[i];
    int a[n][m];rep(i,n)rep(j,m)cin>>a[i][j];
    int ans=0;
    rep(i,n){
        int tmp=c;
        rep(j,m){
            tmp+=a[i][j]*b[j];
        }
        if(tmp>0)ans++;
    }
    co(ans);
}
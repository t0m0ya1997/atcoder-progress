#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,m;cin>>n;
    int t[n];
    int sum=0;
    rep(i,n){cin>>t[i];sum+=t[i];}
    cin>>m;
    int mx=-1;
    int dif[m];
    rep(i,m){int p,x;cin>>p>>x;dif[i] = t[p-1]-x;}
    rep(i,m){
        co(sum-dif[i]);
    }
}
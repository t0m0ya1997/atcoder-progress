#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    int b[n-1];rep(i,n-1)cin>>b[i];
    int a[n];
    a[0]=b[0];a[n-1]=b[n-2];
    rep1(i,n-2){
        a[i]=min(b[i],b[i-1]);
    }
    int ans=0;
    rep(i,n){
        ans+=a[i];
    }
    co(ans);
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    vector<int>a(100000,0);
    int n;cin>>n;
    rep(i,n){
        int tmp;cin>>tmp;a[tmp]+=1;
    }
    int mx=-1;
    rep(i,100000-2){
        mx = max(mx,a[i]+a[i+1]+a[i+2]);
    }
    co(mx);
}

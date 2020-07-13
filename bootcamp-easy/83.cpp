#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    int tmp, sum=0;
    rep(i,n){cin>>tmp;sum+=tmp;a[i]=sum;}
    sum = 0;
    rep(i,n){cin>>tmp;sum+=tmp;b[i]=sum;}
    int mx = a[0]+b[n-1];
    rep1(i,n-1){
        mx = max(mx, a[i]+b[n-1]-b[i-1]);
    }
    co(mx);
}
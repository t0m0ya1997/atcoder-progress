#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    vector<int> c(n);rep(i,n)cin>>c[i];
    sort(c.begin(), c.end());
    int a=0,b=0;
    rep(i,n){
        (i%2==0)?a+=c[i]:b+=c[i];
    }
    co(abs(a-b));
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "
int main(){
    int n;cin>>n;
    int a[n],b[n];
    rep(i,n){
        cin>>a[i];b[i]=a[i];
    }
    sort(b,b+n, greater<int>());
    rep(i,n){
        co((a[i]==b[0])?b[1]:b[0]);
    }
}
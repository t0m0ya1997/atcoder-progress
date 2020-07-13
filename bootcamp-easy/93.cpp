#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    int a[n]={0};
    int sum = 0;
    rep(i,n){ll tmp;cin>>tmp;sum+=tmp;a[i]=sum;}
    ll mn =  1e12;
    rep(i,n){
        mn = min(mn, (ll)abs(2*a[i]-a[n-1]));
    }
    co(mn);
}
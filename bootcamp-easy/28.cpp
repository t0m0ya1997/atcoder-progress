#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    vector<ll> a(n);rep(i,n)cin>>a[i];
    int ans = 0;
    while(1){
        for(auto i=a.begin();i!=a.end();i++){
            if(*i%2==1){co(ans);return 0;}
            else*i/=2;
        }
        ans++;
    }
}
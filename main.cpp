#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i, n) for(int i = 1; i <= (n); i++)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout << (x) << " "
#define MAAX (ll)(1e9+7)
int main(){
    ll k;
    string s;
    cin>>k;
    cin>>s;
    ll size = s.size();
    ll ans = 1;
    for(ll i=0;i<k;i++){
        ans *= ((s.size()+1)*26)%MAAX;
        ans = ans % MAAX;
    }
    co(ans);
}
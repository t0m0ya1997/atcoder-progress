#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    string s;
    map<string, int> mp;
    int mx = -1;
    rep(i,n){cin>>s;mp[s]++;mx=max(mx,mp[s]);}
    for(auto i = mp.begin();i!=mp.end();i++){
        if(mx == i->second)co(i->first);
    }

}
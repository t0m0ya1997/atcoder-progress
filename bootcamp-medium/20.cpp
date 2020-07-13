#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    map<int,int>mp;
    rep(i,n){
        int a;cin>>a;
        if(mp[a]==0)mp[a]++;
        else mp[a]--;
    }
    int ans = 0;
    for(auto i=mp.begin();i!=mp.end();i++){
        ans+=i->second;
    }
    co(ans);
}
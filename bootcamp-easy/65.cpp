#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string s;cin>>s;
    int aind=s.size(),zind=0;
    rep(i,s.size()){
        if(s[i]=='A')aind=min(aind,i);
        if(s[i]=='Z')zind=max(zind,i);
    }
    co(zind-aind+1);
}
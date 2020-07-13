#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string s;cin>>s;
    int cnt=0;
    int bcnt=0;
    vector<int>w;
    rep(i,s.size()){
        if(s[i]=='B')bcnt++;
        else{w.push_back(bcnt);}
    }
    ll ans = 0;
    for(auto i=w.begin();i!=w.end();i++){
        ans += (*i);
    }
    co(ans);
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int w,h;cin>>h>>w;
    string s[h]={""};
    rep(i,h){cin>>s[i];}
    rep(i,h){s[i].insert(0,"#");s[i].push_back('#');}
    string up="";
    rep(i,w+2)up.push_back('#');
    co(up);
    rep(i,h){
        co(s[i]);
    }
    co(up);
}
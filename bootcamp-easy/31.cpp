#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string s;cin>>s;
    map<char,int> m;
    rep(i,s.size())m[s[i]]++;
    for(auto i = m.begin();i!=m.end();i++){
        if(i->second>1){co("no");return 0;}
    }
    co("yes");
}
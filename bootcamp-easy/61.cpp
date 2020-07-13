#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string s,t;cin>>s>>t;
    string ss=s;
    rep(i,s.size())ss.push_back(s[i]);
    reverse(ss.begin(),ss.end());
    reverse(t.begin(),t.end());
    rep(i,t.size()){
        bool can = true;
        rep(j, t.size()){
            if(t[j]!=ss[i+j]){can=false;break;}
        }
        if(can){co("Yes");return 0;}
    }
    co("No");
}
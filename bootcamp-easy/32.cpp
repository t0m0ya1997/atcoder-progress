#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    int x=0,ans =0;
    string s;cin>>s;
    rep(i,s.size()){
        if(s[i]=='I'){x++;}
        else x--;
        ans = max(ans,x);
    }
    co(ans);
}
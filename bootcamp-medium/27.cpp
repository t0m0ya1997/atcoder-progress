#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i, n) for(int i = 1; i <= (n); i++)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout << (x) << " "

int main(){
    int n;cin>>n;
    string s,t;cin>>s>>t;
    int cnt = 0;
    rep1(i,n){
        string pre = s.substr(n-i,i),suf = t.substr(0,i);
        if(pre==suf)cnt++;
    }
    co(2*n-cnt);
}
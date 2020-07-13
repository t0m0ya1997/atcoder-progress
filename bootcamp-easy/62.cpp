#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int h,w;cin>>h>>w;
    string s[2*h];
    rep(i,h){cin>>s[2*i];s[2*i+1]=s[2*i];}
    rep(i,2*h){
        co(s[i]);
    }
}
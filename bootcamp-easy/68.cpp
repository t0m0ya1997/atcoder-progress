#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    pair<string, pair<int,int>> p[n];
    rep(i,n){
        string s;int m;cin>>s>>m;
        p[i]=make_pair(s,make_pair(-1*m,i+1));
    }
    sort(p,p+n);
    rep(i,n){
        co(p[i].second.second);
    }
}
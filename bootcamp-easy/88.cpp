#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    map<string, int>b,r;
    int n,m;
    string tmp;
    cin>>n;rep(i,n){cin>>tmp;b[tmp]++;}
    cin>>m;rep(i,m){cin>>tmp;r[tmp]++;}
    int mx = 0;
    for(auto i=b.begin();i!=b.end();i++){
        mx = max(mx, i->second-r[i->first]);
    }
    co(mx);
}
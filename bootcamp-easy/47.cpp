#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    vector<ll>l;l.push_back(2);l.push_back(1);
    for(int i=2;i<n+1;i++){
        l.push_back(l[i-2]+l[i-1]);
    }
    co(l[n]);
}
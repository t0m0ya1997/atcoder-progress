#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    int p[n];
    int tmpmin=200001;
    int cnt=0;
    rep(i,n){int tmp;cin>>tmp;if(tmpmin>tmp){cnt++;tmpmin=tmp;}}
    co(cnt);
}
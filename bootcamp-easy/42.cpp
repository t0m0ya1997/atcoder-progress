#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,m;cin>>n>>m;
    int r[m+1]={0};
    rep(i,n){
        int k;cin>>k;
        rep(i,k){int tmp;cin>>tmp;r[tmp]++;}
    }
    int cnt = 0;
    rep(i,m+1){
        if(r[i]==n)cnt++;
    }
    co(cnt);
}

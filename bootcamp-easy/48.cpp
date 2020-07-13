#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    int ans = 0, cnt = 0;
    int before;cin>>before;
    rep(i,n-1){
        int tmp;cin>>tmp;
        if(tmp<=before){cnt++;}
        else {ans=max(ans,cnt);cnt=0;}
        before = tmp;
    }
    co(max(ans,cnt));
}
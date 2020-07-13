#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    ll h,w;cin>>h>>w;
    if(h==1||w==1){co(1);return 0;}
    co(((h*w)%2==1)?h*w/2+1:h*w/2);
}
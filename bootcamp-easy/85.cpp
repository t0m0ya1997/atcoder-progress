#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    ll d,n;cin>>d>>n;
    if(d==0){co(n==100?101:n);return 0;}
    if(d==1){co(n==100?101*100:100*n);return 0;}
    if(d==2){co(n==100?101*10000:10000*n);return 0;}
}
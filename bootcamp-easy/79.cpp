#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,a,b;cin>>n>>a>>b;
    if((b-a)%2==0){co(abs(b-a)/2);return 0;}
    int ans = min(a-1,n-b)+(b-a-1)/2+1;
    co(ans);
}
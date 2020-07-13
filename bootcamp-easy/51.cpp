#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int digitSum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n,a,b;cin>>n>>a>>b;
    ll ans=0;
    rep1(i,n){
        int c=digitSum(i);
        if(c>=a&&c<=b)ans+=i;
    }
    co(ans);
}
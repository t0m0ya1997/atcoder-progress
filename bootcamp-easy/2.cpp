#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int N;cin>>N;
    int sum=0;
    int a[N];
    rep(i,N){cin>>a[i];sum+=a[i];}
    int cand1 = ceil((double)sum/N);
    int cand2 = sum/N;
    ll r1=0,r2=0;
    rep(i,N){
        r1+=(cand1-a[i])*(cand1-a[i]);
        r2+=(cand2-a[i])*(cand2-a[i]);
    }
    co(min(r1, r2));
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,t,a;cin>>n>>t>>a;
    double mn =1e9;
    double dif[n];
    rep(i,n){
        double h;cin>>h;
        double tmp = t-h*0.006;
        mn = min(mn,abs((double)a-tmp));
        dif[i]=abs((double)a-tmp);
    }
    rep(i,n){
        if(dif[i]==mn){
            co(i+1);return 0;
        }
    }
}
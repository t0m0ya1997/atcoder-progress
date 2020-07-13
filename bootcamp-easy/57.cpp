#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int a,b;cin>>a>>b;
    int cand1=floor((double)a/0.08);
    int cand2=ceil((double)a/0.08);
    int cand3=floor((double)b/0.1);
    int cand4=ceil((double)b/0.1);
    int mn=min(cand1,min(cand2,min(cand3,cand4)));
    int mx=max(cand1,max(cand2,max(cand3,cand4)));
    for(int i=mn;i<=mx;i++){
        if((a==8*i/100)&&(b==i/10)){co(i);return 0;}
    }
    co(-1);
}
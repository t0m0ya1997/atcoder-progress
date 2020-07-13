#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int k,n;cin>>k>>n;
    int before = 0;
    vector<int> v(n+1);
    int tmp;
    int maxdis=0;
    rep(i,n){
        tmp;cin>>tmp;
        v[i]=tmp-before;
        if(maxdis<v[i]){maxdis=v[i];}
        before = tmp;
    }
    v[n]=k-before;
    if(v[0]+v[n]>maxdis)maxdis=v[0]+v[n];
    co(k-maxdis);
}
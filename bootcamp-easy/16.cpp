#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    pair<int,int>p[n];
    rep(i,n){
        cin>>p[i].first;
        p[i].second = i;
    }
    sort(p,p+n);
    rep(i,n){
        cosp(p[i].second+1);
    }
    printf("\n");

}
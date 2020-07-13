#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i, n) for(int i = 1; i <= (n); i++)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout << (x) << " "

int main(){
    int n,k;cin>>n>>k;
    int a[200001]={0};
    vector<int>v;
    rep(i,n){int tmp;cin>>tmp;a[tmp]++;}
    rep(i,200001){
        if(a[i]!=0)v.push_back(a[i]);
    }
    sort(v.begin(),v.end(),greater<int>());
    if(v.size()<=k){co(0);return 0;}
    ll ans = 0;
    while(v.size()>k){
        ans+=v.back();
        v.pop_back();
    }
    co(ans);
}
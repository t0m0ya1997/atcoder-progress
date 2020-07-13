#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,k,q;cin>>n>>k>>q;
    vector<int> s(n,0);
    rep(i,q){int tmp;cin>>tmp;s[tmp-1]++;}
    rep(i,n){
        if(k-q+s[i]>0)co("Yes");
        else co("No");
    }
}
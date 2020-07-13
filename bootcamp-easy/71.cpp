#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,l;cin>>n>>l;
    string s[n];rep(i,n)cin>>s[i];
    sort(s, s+n);
    rep(i,n)cout<<s[i];
    printf("\n");
}
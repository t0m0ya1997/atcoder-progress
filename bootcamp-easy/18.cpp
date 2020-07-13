#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string s;cin>>s;
    int mx = 0;
    int tmp = 0;
    rep(i,s.size()){
        if(s[i]=='A'||s[i]=='G'||s[i]=='C'||s[i]=='T')tmp++;
        else{mx = max(mx,tmp);tmp=0;}
    }
    co(max(mx,tmp));
}
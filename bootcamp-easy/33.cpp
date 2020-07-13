#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int a,b;string s;cin>>a>>b>>s;
    rep(i,s.size()){
        if((i==a)&&(s[i]!='-')){co("No");return 0;}
        if((i!=a)&&(s[i]=='-')){co("No");return 0;}
    }
    co("Yes");
}
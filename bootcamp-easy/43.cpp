#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string s;cin>>s;
    int c[26]={0};
    rep(i,s.size()){
        c[(int)(s[i]-'a')]++;
    }
    rep(i,26){
        if(c[i]%2==1){co("No");return 0;}
    }
    co("Yes");
}
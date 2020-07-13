#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string s;cin>>s;
    string s1,s2;
    rep(i,s.size()){
        if(i%2==0){s1.push_back('1');s2.push_back('0');}
        else{s2.push_back('1');s1.push_back('0');}
    }
    int r1=0,r2=0;
    rep(i,s.size()){
        if(s[i]!=s1[i])r1++;
        if(s[i]!=s2[i])r2++;
    }
    co(min(r1,r2));
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int a,b,c,d;
    string s;cin>>s;
    a=s[0]-'0';b=s[1]-'0';c=s[2]-'0';d=s[3]-'0';
    s="";
    int bitt;
    for (int bit = 0; bit < (1<<3); ++bit){
        int ans = a;
        if(bit & (1<<0)){ans+=b;}else{ans-=b;}
        if(bit & (1<<1)){ans+=c;}else{ans-=c;}
        if(bit & (1<<2)){ans+=d;}else{ans-=d;}
        if(ans==7)
        bitt=bit;
    }
    s.push_back('0'+a);
    if(bitt & (1<<0)){s.push_back('+');}else{s.push_back('-');}
    s.push_back('0'+b);
    if(bitt & (1<<1)){s.push_back('+');}else{s.push_back('-');}
    s.push_back('0'+c);
    if(bitt & (1<<2)){s.push_back('+');}else{s.push_back('-');}
    s.push_back('0'+d);
    s.push_back('=');
    s.push_back('7');
    co(s);

}
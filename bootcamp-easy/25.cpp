#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    string d,p,q;
    rep(i,n){char c;cin>>c;p.push_back(c);}
    rep(i,n){char c;cin>>c;q.push_back(c);}
    for(char i = '1';i<'1'+n;i++)d.push_back(i);
    ll acnt,bcnt,cnt=1;
    do{
        if(d==p)acnt=cnt;
        if(d==q)bcnt=cnt;
        cnt++;
    }while(next_permutation(d.begin(),d.end()));
    co(abs(acnt-bcnt));
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int h,w;cin>>h>>w;
    string s[h+2];
    rep1(i,h){string tmp;cin>>tmp;s[i].push_back('.');s[i].append(tmp);s[i].push_back('.');}
    rep(i,w+2){s[0].push_back('.');s[h+1].push_back('.');}
    rep1(i,h){
        rep1(j,w){
            if(s[i][j]=='#'&&s[i-1][j]=='.'&&s[i+1][j]=='.'&&s[i][j-1]=='.'&&s[i][j+1]=='.'){co("No");return 0;}
        }
    }
    co("Yes");
}
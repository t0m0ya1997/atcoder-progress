#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i, n) for(int i = 1; i <= (n); i++)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout << (x) << " "
int main(void){
    int n,m;cin>>n>>m;
    vector<pair<int,char>>v(m);
    rep(i, m){
        int s;char c;cin>>s>>c;
        v[i]=make_pair(s,c);
    }
    int ans = -1;
    for(int i= (n!=1)?pow(10, n-1):0;i<pow(10,n);++i){
        string num = to_string(i);
        bool can = true;
        for(auto itr=v.begin();itr!=v.end();++itr){
            if(num[itr->first-1]!=itr->second){can=false;break;}
        }
        if(can){ans = i;break;}
    }
    co(ans);
}


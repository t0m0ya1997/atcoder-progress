#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,m;cin>>n>>m;
    int a[n][2];rep(i,n)cin>>a[i][0]>>a[i][1];
    int c[m][2];rep(i,m)cin>>c[i][0]>>c[i][1];
    vector<int>ans;
    rep(i,n){
        int tmp=0;
        int index = 0;
        int mn = 1000000000;
        rep(j,m){
            tmp = abs(a[i][0]-c[j][0])+abs(a[i][1]-c[j][1]);
            if(mn>tmp){mn=tmp;index=j+1;}
        }
        ans.push_back(index);
    }
    for(auto i=ans.begin();i!=ans.end();i++){
        co(*i);
    }
}
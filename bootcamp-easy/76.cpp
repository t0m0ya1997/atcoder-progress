#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,m;cin>>n>>m;
    bool flag[n+1]={false};
    int pen[n+1]={0};
    rep(i,m){
        int num;string s;cin>>num>>s;
        if(s=="AC")flag[num]=true;
        else if(!flag[num])pen[num]++;
    }
    int ans1 = 0;
    rep(i,n+1){
        if(flag[i])ans1+=pen[i];
    }
    int ans2 = count(flag,flag+(n+1), true);
    cosp(ans2);co(ans1);
}
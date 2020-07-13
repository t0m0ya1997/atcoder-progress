#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    int bt = 0;
    int bx=0,by = 0;
    rep(i,n){
        int t,x,y;cin>>t>>x>>y;
        int dist = abs(bx-x)+abs(by-y);
        if(((t-bt)>=dist)&&((t-bt)%2==dist%2)){bx=x;by=y;bt=t;continue;}
        else{co("No");return 0;}
    }
    co("Yes");
}
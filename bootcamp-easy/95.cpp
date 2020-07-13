#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    vector<int>v(3);rep(i,3)cin>>v[i];
    sort(v.begin(),v.end());
    int all = 2*v[2]-v[0]-v[1];
    int ans = all%2==0?(all/2):(all/2+2);
    co(ans);
}
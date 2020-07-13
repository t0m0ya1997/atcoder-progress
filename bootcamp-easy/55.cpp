#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,d;cin>>n>>d;
    int cnt=0;
    double x[n][d];rep(i,n)rep(j,d)cin>>x[i][j];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            double dist=0.0;
            rep(k,d){
                dist+=(x[i][k]-x[j][k])*(x[i][k]-x[j][k]);
            }
            dist = sqrt(dist);
            if(dist==floor(dist))cnt++;
        }
    }
    co(cnt);
}
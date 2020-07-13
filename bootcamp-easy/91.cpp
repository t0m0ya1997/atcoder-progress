#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int fact(int n)
{
    int x = 1; // 0! = 1

    for (int i = 1; i <= n; ++i)
        x *= i;

    return x;
}

int main(){
    int n;cin>>n;
    double x[n],y[n];rep(i,n)cin>>x[i]>>y[i];
    double d[n][n];
    double ans = 0.0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            d[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            d[j][i]=d[i][j];
        }
    }
    vector<int>v;
    rep(i,n)v.push_back(i);
    do{
        double dist=0.0;
        rep(i,n-1){
            dist+=d[v[i]][v[i+1]];
        }
        ans += dist;
    }while(next_permutation(v.begin(),v.end()));
    ans/=(double)fact(n);
    printf("%.12f\n", ans);
}


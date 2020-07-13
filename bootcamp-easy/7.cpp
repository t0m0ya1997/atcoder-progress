#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int a[3][3];rep(i,3)rep(j,3)cin>>a[i][j];
    int n;cin>>n;
    rep(i,n){
        int tmp;cin>>tmp;
        rep(j,3)rep(k,3)if(a[j][k]==tmp)a[j][k]=0;
    }
    ll flag = (a[0][0]+a[0][1]+a[0][2])*(a[1][0]+a[1][1]+a[1][2])*(a[2][0]+a[2][1]+a[2][2])*(a[0][0]+a[1][0]+a[2][0])*(a[0][1]+a[1][1]+a[2][1])*(a[0][2]+a[1][2]+a[2][2])*(a[0][0]+a[1][1]+a[2][2])*(a[0][2]+a[1][1]+a[0][2]);
    if(flag==0)co("Yes");else co("No");
}
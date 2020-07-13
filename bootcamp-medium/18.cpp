#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int c[4][4];
    rep1(i,3)rep1(j,3)cin>>c[i][j];
    int b[4];
    for(int a1=0;a1<=100;a1++){
        b[1]=c[1][1]-a1;
        b[2]=c[1][2]-a1;
        b[3]=c[1][3]-a1;
        if((c[2][1]-b[1])==(c[2][2]-b[2])&&(c[2][1]-b[1])==(c[2][3]-b[3])&&(c[2][3]-b[3])==(c[2][2]-b[2])&&(c[3][1]-b[1])==(c[3][2]-b[2])&&(c[3][1]-b[1])==(c[3][3]-b[3])&&(c[3][3]-b[3])==(c[3][2]-b[2])){co("Yes");return 0;}
    }
    co("No");
}

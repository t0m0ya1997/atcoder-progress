#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    int a[200010];
    rep1(i,n)cin>>a[i];
    int index = 1;
    int cnt=0;
    rep1(i,n){
        if(a[i]==index)index++;
        else{cnt++;}
    }
    co((index==1)?(-1):(cnt));
}
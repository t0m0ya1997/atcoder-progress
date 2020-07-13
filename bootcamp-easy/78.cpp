#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    int h[n];rep(i,n)cin>>h[i];
    reverse(h,h+n);
    rep(i,n-1){
        if(h[i]<h[i+1]-1){co("No");return 0;}
        if(h[i]==h[i+1]-1)h[i+1]--;
    }
    co("Yes");
}
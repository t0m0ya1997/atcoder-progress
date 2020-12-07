#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int keta(ll num){
    int cnt=0;
    while(num>0){
        cnt++;
        num/=10;
    }
    return cnt;
}

int main(){
    int a, b; ll x;cin>>a>>b>>x;
    ll left=0, right=1000000000, mid;
    while(true){
        mid = (left+right)/2;
        ll cand = a*mid+b*keta(mid);
        if(x==cand){co(mid);return 0;}
        else if(x<cand){right = mid;}
        else {left = mid;}

        if(left==right)break;
    }
    co(0);
}


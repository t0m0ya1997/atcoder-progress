#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int a,b;cin>>a>>b;
    int sum=1;
    int cnt = 0;
    while(sum<b){
        cnt++;
        sum = sum+a-1;
    }
    co(cnt);
}
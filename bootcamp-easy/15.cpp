#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    vector<int> v(n);rep(i,n)cin>>v[i];
    sort(v.begin(),v.end(), less<int>());
    co(abs(v[n/2]-v[n/2-1]));
}
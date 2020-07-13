#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int a[5];
    int ans = 1e9;
    rep(i,5){
        cin>>a[i];
    }
    vector<int>v={0,1,2,3,4};
    do{
        int sum =0;
        rep(i,4){
            sum+=(a[v[i]]%10!=0)?(a[v[i]]+(10-a[v[i]]%10)):a[v[i]];
        }
        sum+=a[v[4]];
        ans = min(ans,sum);
    }while(next_permutation(v.begin(),v.end()));
    co(ans);
}
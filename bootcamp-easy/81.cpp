#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int c2(int num){
    int ans = 0;
    while(num>0){
        if(num%2==1)return ans;
        else {ans++;num/=2;}
    }
    return ans;
}

int main(){
    int n;cin>>n;
    vector<int> v;
    rep(i,n){int tmp;cin>>tmp;if(tmp%2==0)v.push_back(c2(tmp));}
    if(v.empty()){co(0);return 0;}
    ll sum=0;
    for(auto i=v.begin();i!=v.end();i++){
        sum+=*i;
    }
    co(sum);
}
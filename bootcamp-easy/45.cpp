#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int a,b;cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        string s1=to_string(i);
        string s2=to_string(i);
        reverse(s2.begin(),s2.end());
        if(s1==s2)cnt++;
    }
    co(cnt);
}
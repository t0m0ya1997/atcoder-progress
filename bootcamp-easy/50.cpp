#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string a,b;cin>>a>>b;
    if(a==b){co("EQUAL");return 0;}
    if(a.size()>b.size()){co("GREATER");return 0;}
    if(a.size()<b.size()){co("LESS");return 0;}
    rep(i,a.size()){
        if(a[i]>b[i]){co("GREATER");return 0;}
        if(a[i]<b[i]){co("LESS");return 0;}
    }

}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,a,b;cin>>n>>a>>b;
    string s;cin>>s;
    int total =0;
    int vtotal=0;
    rep(i, s.size()){
        if(s[i]=='c'){co("No");continue;}
        if(s[i]=='a'){
            if(total<a+b){co("Yes");total+=1;}else co("No");
        }
        if(s[i]=='b'){
            if(total<a+b&&vtotal<b){co("Yes");total+=1;vtotal+=1;}else co("No");
        }
    }
}
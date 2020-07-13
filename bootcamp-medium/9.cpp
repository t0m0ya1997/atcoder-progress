#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int a,b,c;cin>>a>>b>>c;
    for(int i=1;i<=b;i++){
        if(i*a%b==c){co("YES");return 0;}
    }
    co("NO");
}

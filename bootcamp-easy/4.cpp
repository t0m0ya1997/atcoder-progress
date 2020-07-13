#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    double n;cin>>n;
    int c1 = floor(n/1.08);
    int c2 = ceil(n/1.08);
    if(int(c1*1.08)==int(n)){co(c1);return 0;}
    if(int(c2*1.08)==int(n)){co(c2);return 0;}
    co(":(");
}
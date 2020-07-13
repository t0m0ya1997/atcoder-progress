#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int s;cin>>s;
    map<int, int> m;m[s]++;
    int index = 1;
    while(1){
        index++;
        int nw = (s%2==0)?s/2:3*s+1;
        if(m[nw]>0){co(index);return 0;}
        m[nw]++;
        s = nw;
    }
}
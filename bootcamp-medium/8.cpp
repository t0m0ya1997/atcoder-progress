#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    map<int,int>mp;
    int over=0;
    rep(i,n){
        int tmp;cin>>tmp;if(tmp>=3200){over++;continue;}
        else{mp[tmp/400]++;}
    }
    int ans1 = mp.size()==0?1:mp.size();
    int ans2 = mp.size()+over;
    cosp(ans1);co(ans2);
}

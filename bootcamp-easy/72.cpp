#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int x;cin>>x;
    bool array[x+1]={false};
    array[1]=true;
    for(int i=2;i*i<=x;i++){
        ll num = i*i;
        while(num<=x){
            array[num]=true;
            num*=i;
        }
    }
    int ans = 1;
    rep1(i,x){
        if(array[i])ans =i;
    }
    co(ans);
}
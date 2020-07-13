#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,k;cin>>n>>k;
    double sumprob=0.0;
    rep1(i,n){
        double prob=1.0;
        int cnt = i;
        while(cnt<k){
            prob*=(0.5);
            cnt*=2;
        }
        sumprob += prob;
    }
    printf("%.12f\n",sumprob/n);
}
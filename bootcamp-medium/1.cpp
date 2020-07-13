#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    bool can = false;
    int cnt = 0;
    int a[n+1];rep1(i,n){cin>>a[i];if(a[i]==2)can = true;}
    if(!can){co(-1);return 0;}
    int index = 1;
    bool flag[n+1]={false};
    while(1){
        if(flag[a[index]]){co(-1);return 0;}
        if(a[index]==2){cnt++;break;}
        else{flag[a[index]]=true;cnt++;index = a[index];}
    }
    co(cnt);
}
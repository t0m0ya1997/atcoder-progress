#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i, n) for(int i = 1; i <= (n); i++)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout << (x) << " "

int main(){
    int n;cin>>n;
    int a[n];rep(i,n)cin>>a[i];
    int ans = 0;
    for(int i=0;i<n;){
        if(a[i]<=a[i+1]&&a[i+1]<=a[i+2]){i=i+2;while(1){int cnt = 0;if(a[i]<=a[i+1])continue;else i+=cnt;}ans++;}
    }
}
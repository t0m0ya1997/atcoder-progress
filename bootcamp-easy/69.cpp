#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string s;cin>>s;
    string before;
    int length=1;
    int ans=0;
    for(int index = 0;index<s.size();){
        if(s[index]==s[index+1]){ans++;index+=3;}
        else{ans++;index+=2;}
    }
    co(ans);
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n;cin>>n;
    string s[n];rep(i,n)cin>>s[i];
    map<string,bool> flag;
    string before = s[0];
    flag[before]=true;
    rep1(i,n-1){
        if(flag[s[i]]){co("No");return 0;}
        if(before[before.size()-1]!=s[i][0]){co("No");return 0;}
        flag[s[i]]=true;
        before = s[i];
    }
    co("Yes");
}
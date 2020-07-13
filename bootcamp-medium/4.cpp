#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "
 
int main(){
    string s;cin>>s;
    bool odd = (s.size()%2==1);
    if(odd)s.pop_back();
    else{s.pop_back();s.pop_back();}
    int mx = 0;
    for(int i=1;i<=s.size()/2;i++){
        if(s.substr(0,i)==s.substr(i,i)){mx = i;}
    }
    co(mx*2);
}
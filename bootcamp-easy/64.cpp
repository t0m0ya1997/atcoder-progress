#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string o,e;cin>>o>>e;
    reverse(o.begin(),o.end());
    reverse(e.begin(),e.end());
    string ans;
    int size = o.size()+e.size();
    for(int i=0;i<size;i++){
        if(i%2==1){ans.push_back(e.back());e.pop_back();}
        else{ans.push_back(o.back());o.pop_back();}
    }
    co(ans);
}
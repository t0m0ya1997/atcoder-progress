#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string s;cin>>s;
    stack<char>st;
    int ans = 0;
    st.push(s[0]);
    rep1(i, s.size()-1){
        if(st.empty()){st.push(s[i]);continue;}
        if(st.top()!=s[i]){st.pop();ans+=2;}
        else{st.push(s[i]);}
    }
    co(ans);
    /*賢い解答
    string s;cin>>s;
    int cnt1=0,cnt0=0;
    rep(i,s.size()){
        if(s[i]=='1')cnt++;
        else cnt0++;
    }
    co(2*min(cnt1,cnt0));
    */
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    double n;cin>>n;
    priority_queue<double, vector<double>, greater<double>> q;
    rep(i,n){double tmp;cin>>tmp;q.push(tmp);}
    rep(i,n-1){
        double a = q.top();q.pop();
        double b = q.top();q.pop();
        q.push((a+b)/2);
    }
    co(q.top());
}
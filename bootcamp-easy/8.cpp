#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    string a,b;cin>>a>>b;
    int num = stoi(b)+stoi(a)*pow(10, b.size());
    if((int)sqrt(num)==sqrt(num))co("Yes");
    else co("No");
}
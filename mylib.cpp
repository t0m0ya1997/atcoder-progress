#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

//素数判定
bool is_prime(int x){
    for(int i=2;i*i<=x;++i){
        if(x%i==0){return false;}
    }
    return true;
}

//桁和
int SumOfDigits(ll num){
    int ans =0;
    while(num>0){
        ans+=(num%10);
        num/=10;
    }
    return ans;
}

//最小公倍数
int lcm(int a, int b){
    return a*b/__gcd(a, b);
}

//最大公約数
int gcd(int a, int b){
    return (a%b==0)?b:gcd(b, a%b);
}

//桁数
int keta(int n){
    int cnt=0;
    while(n>0){
        cnt++;
        n/=10;
    }
    return cnt;
}

//２分探索雛形
while(1){
        ll mid = (left+right)/2;
        ll cand = a*mid+b*keta(mid);
        if(cand==x){co(mid);return 0;}
        if(cand<x){left = mid;}
        else{right=mid;}
        if(left+1==right){co(left);return 0;}
    }


//組み合わせ・階乗mod
const ll MAX = 100000000;
const ll MOD = 1000000007;

ll fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
ll COM(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
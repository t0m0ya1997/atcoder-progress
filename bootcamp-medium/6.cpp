#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int h,w;cin>>h>>w;
    string s[h+2]={""};
    char ans[h][w]={'#'};
    rep1(i,h){string tmp;s[i].push_back('p');cin>>tmp;s[i].append(tmp);s[i].push_back('p');}
    rep(i,s[1].size()){s[0].push_back('p');s[h+1].push_back('p');}
    rep1(i,h)rep1(j,w){
        if(s[i][j]=='.'){
            char sum = '0';
            for(int k=-1;k<=1;k++){
                for(int l=-1;l<=1;l++){
                    if(s[i+k][j+l]=='#')sum++;
                }
            }
            ans[i-1][j-1]=sum;
        }
        else ans[i-1][j-1]='#';
    }
    rep(i,h){
        rep(j,w){
            cout<<ans[i][j];
        }
        printf("\n");
    }
}
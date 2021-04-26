#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)

#define MOD = 1000000007

int main(){
    int a, b, c, x, y;
    int ans = 2147483647;
    cin >> a >> b >> c >> x >> y;
    rep(i,max(x,y)*2){
        int x_nokori, y_nokori;
        if(x-i>=0){
            x_nokori = x-i;
        }else{
            x_nokori = 0;
        }
        if(y-i>=0){
            y_nokori = y-i;
        }else{
            y = 0;
        }
        int tmp = 2*c*i + a*x_nokori + b*y_nokori;
        if(tmp <= ans) ans = tmp;
    }
    cout << ans << endl;
}
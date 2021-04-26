#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)

#define MOD = 1000000007

int main(){
    int n;
    int ans = 0;
    cin >> n;
    int x[n], y[n];
    rep(i,n) cin >> x[i] >> y[i];
    rep(i,n) rep(j,n){
        int q_x = x[j] - y[j] + y[i];
        int q_y = y[j] + x[j] - x[i];
        int r_x = x[i] - y[j] + y[i];
        int r_y = y[i] + x[j] - x[i];
        bool f_qx = false;
        bool f_qy = false;
        bool f_rx = false;
        bool f_ry = false;
        rep(k,n){
            f_qx = (x[k] == q_x) || f_qx;
            f_qy = (y[k] == q_y) || f_qy; 
            f_rx = (x[k] == r_x) || f_rx;
            f_ry = (y[k] == r_y) || f_ry;
        }
        if(f_qx && f_qy && f_rx && f_ry){
            ans = max(ans, (x[i] - x[j])^2 + (y[i] - y[j])^2);
        }
    }
    cout << ans << endl;
}
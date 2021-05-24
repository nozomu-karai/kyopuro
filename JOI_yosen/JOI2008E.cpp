#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

template <class T = int>
using V = vector<T>;
template <class T = int>
using VV = V<V<T>>;
#define pii pair<int,int>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i,n) for(ll i=0;i<ll(n);i++)

#define MOD = 1000000007

int main(){
    int r, c;
    cin >> r >> c;
    VV<int> a(r, V<int>(c));
    rep(i,r) rep(j,c) cin >> a[i][j];
    int ans = 0;
    for(int i=0;i<(1<<r);i++){
        auto b = a;
        int tmp = 0;
        rep(j,r){
            if(i>>j & 1){
                rep(k,c){
                    if(b[j][k] == 1) b[j][k] = 0;
                    else b[j][k] = 1;
                }
            }
        }
        rep(j,c){
            int t = 0;
            rep(k,r){
                if(b[k][j] == 1) t++;
            }
            tmp += max(t, r-t);
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}
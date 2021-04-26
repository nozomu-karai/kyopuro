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
    int n, m;
    cin >> n >> m;
    int ans = 0;
    VV<bool> x(n, V<bool>(n));
    rep(i,m){
        int y, z;
        cin >> y >> z;
        x[y-1][z-1] = x[z-1][y-1] = true;
    }
    for(int i=0;i<(1<<n);i++){
        int t = bitset<32>(i).count();
        if(t <= ans) continue;
        bool f = true;
        rep(j,n) rep(k,j){
            if(i >> j & i >> k & 1 && !x[j][k]) f = false;
        }
        if(f) ans = t;
    }
    cout << ans << endl;
}
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
    int n;
    ll ans = 0;
    cin >> n;
    V<int> a(n), b(n), c(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) cin >> c[i];
    sort(all(a));
    sort(all(b));
    sort(all(c));
    rep(i,n){
        int y = b[i];
        auto p = lower_bound(all(a), y);
        auto q = upper_bound(all(c), y);
        int l = p - a.begin();
        int m = q - c.begin();
        ans += (ll)(l * (n - m));
    }
    cout << ans << endl;
}
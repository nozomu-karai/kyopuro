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
    ll d, n, m;
    ll ans = 0;
    cin >> d >> n >> m;
    V<ll> a(n+1);
    a[0] = 0;
    a[1] = d;
    rep(i,n-1){
        ll tmp;
        cin >> tmp;
        a[i+2] = tmp;
    }
    sort(all(a));
    rep(i,m){
        ll tmp;
        cin >> tmp;
        auto b = lower_bound(all(a), tmp);
        int x = b - a.begin();
        ans += min(abs(a[x] -tmp), abs(a[x-1] - tmp));
    }
    cout << ans << endl;
}
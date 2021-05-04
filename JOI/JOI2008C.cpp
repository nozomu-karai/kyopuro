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
    ll n, m, ans=0;
    cin >> n >> m;
    V<ll> p(n+1);
    p[0] = 0;
    rep(i,n) cin >> p[i+1];
    V<ll> q((n+1)*(n+1));
    rep(i,n+1) rep(j,n+1){
        q.push_back(p[i] + p[j]);
    }
    sort(all(q));
    rep(i,q.size()){
        if(q[i] > m) break;
        int a = upper_bound(all(q),m-q[i]) - q.begin() - 1;
        ans = max(ans, q[i] + q[a]);
    }
    cout << ans << endl;
}
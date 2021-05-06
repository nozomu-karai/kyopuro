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

V<bool> seen;
V<int> cnt;

void dfs(VV<int> &g, int p, int x){
    cnt[p] += x;
    seen[p] = true;
    for(auto next : g[p]){
        if(seen[next]) continue;
        dfs(g, next, x);
    } 
}

int main(){
    int n, q, ans=0;
    cin >> n >> q;
    seen.resize(n);
    cnt.resize(n);
    rep(i,n) cnt[i] = 0;
    VV<int> g(n, V<int>());
    rep(i,n-1){
        int a, b;
        cin >> a >> b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }
    rep(i,q){
        rep(i,n) seen[i] = false;
        int p, x;
        cin >> p >> x;
        dfs(g, p-1, x);
    }
    rep(i,n) cout << cnt[i] << " ";
}
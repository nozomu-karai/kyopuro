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
    int h, w, n;
    cin >> h >> w >> n;
    V<string> field(h);
    rep(i,h) cin >> field[i];
    VV<bool> seen(h, V<bool>);
    rep(i,h) rep(j,w) seen[i][j] = false;
}
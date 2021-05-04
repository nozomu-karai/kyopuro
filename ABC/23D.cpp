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

ll n;
V<ll> h, s;

bool isOK(ll key){
    V<ll> limit(n);
    rep(i,n){
        if(h[i] > key) return false;
        else limit[min(n-1, (key - h[i])/ s[i])]++;
    }
    rep(i,n-1) limit[i+1] += limit[i];
    rep(i,n){
        if(limit[i] > i+1) return false;
    }
    return true;
}

int main(){
    cin >> n;
    h.resize(n); s.resize(n);
    rep(i,n) cin >> h[i] >> s[i];

    ll ng = 0, ok = 1e18;
    while(ok - ng > 1){
        ll mid = (ok + ng) / 2;
        if(isOK(mid)){
            ok = mid;
        }else{
            ng = mid;
        }
    }
    cout << ok << endl;
}
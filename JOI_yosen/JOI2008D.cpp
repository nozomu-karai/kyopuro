#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
typedef long long ll;

template <class T = int>
using V = vector<T>;
template <class T = int>
using VV = V<V<T>>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i,n) for(ll i=0;i<ll(n);i++)

#define MOD = 1000000007

int main(){
    int n;
    cin >> n;
    V<pair<int,int>> x(n);
    rep(i,n) cin >> x[i].first >> x[i].second;
    int m;
    cin >> m;
    V<pair<int,int>> y(m);
    rep(i,m) cin >> y[i].first >> y[i].second;
    V<pair<int,int>> d(n-1);
    rep(i,n-1){
        d[i].first = x[i+1].first - x[i].first;
        d[i].second = x[i+1].second - x[i].second;
    }
    rep(i,m){
        pair<int,int> now = y[i];
        bool flag = true;
        rep(j,n-1){
            now.first += d[j].first;
            now.second += d[j].second;
            bool g = false;
            rep(k,m){
                if(now == y[k]) g = true;
            }
            if(!g) flag = false;
        }
        if(flag) cout << y[i].first - x[0].first << " "  << y[i].second - x[0].second << endl;
    }

    
}
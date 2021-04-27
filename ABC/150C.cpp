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
    cin >> n;
    V<int> p(n), q(n), a(n);
    rep(i,n) a[i] = i + 1;
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> q[i];
    int cnt = 0;
    int n_p, n_q;
    do{
        cnt++;
        if(p == a) n_p = cnt;
        if(q == a) n_q = cnt;
    }while(next_permutation(all(a)));
    cout << abs(n_p - n_q) << endl;
}
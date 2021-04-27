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
    V<pii> x(n);
    rep(i,n) cin >> x[i].first >> x[i].second;
    int a[n];
    rep(i,n) a[i] = i;
    double cnt = 0, sum = 0;
    do{
        cnt += 1;
        rep(i,n-1) sum += sqrt(pow((x[a[i+1]].first - x[a[i]].first),2) + pow((x[a[i+1]].second - x[a[i]].second),2));
    }while(next_permutation(a, a+n));
    cout << sum / cnt << endl;
}
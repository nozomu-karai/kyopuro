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
    int n, m, ans = 0;
    cin >> n >> m;
    VV<int> s(m,V<int>());
    rep(i,m){
        int k;
        cin >> k;
        rep(j,k){
            int tmp;
            cin >> tmp;
            s[i].push_back(tmp);
        }
    }
    V<int> p(m);
    rep(i,m) cin >> p[i];
    for(int i = 0; i<(1<<n); i++){
        bool f = true;
        int tmp=0;
        rep(j,m){
            tmp = 0;
            rep(k,s[j].size()){
                if(i & (1<<(s[j][k]-1))) tmp++;
            }
            if((tmp%2) != p[j]) f = false;
        }
        if(f) ans++;
    }
    cout << ans << endl;
}
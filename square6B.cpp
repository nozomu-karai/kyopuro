#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)

#define MOD = 1000000007

int main(){
   int n;
   cin >> n;
   ll a[n], b[n];
   vector<ll> c(2*n);
   rep(i,n){
       cin >> a[i] >> b[i];
       c[i] = a[i], c[i+n] = b[i];
   }
   ll ans = 1e18;
   rep(i,2*n) rep(j,2*n){
        ll begin = c[i];
        ll end = c[j];
        ll tmp = 0;
        rep(k,n){
            tmp += min(abs(a[k] - begin) + b[k] - a[k] + abs(b[k] - end), abs(a[k] - end) + b[k] - a[k] + abs(b[k] - begin));
        }
        ans = min(ans, tmp);
   } 
   cout << ans << endl;
}
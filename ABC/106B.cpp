#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)

#define MOD = 1000000007

int main(){
  int n;
  int ans = 0;
  cin >> n;
  for(ll i=1;i<n+1;i+=2){
    int cnt = 0;
    for(ll j=1;j<=i;j++){
      if(i%j == 0){
        cnt++;
      }
    }
    if(cnt == 8) ans++;
  }
  cout << ans << endl;
}

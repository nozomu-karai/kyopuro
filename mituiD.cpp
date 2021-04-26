#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)

#define MOD = 1000000007

int main(){
    int a = 535;
    int c[3] = {a/100, (a/10)%10, a%10};
    rep(i,3) cout << c[i] << endl;
    cout << ('3' == '0'+ c[1]) << endl;
}
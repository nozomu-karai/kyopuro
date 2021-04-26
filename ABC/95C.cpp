#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)

#define MOD = 1000000007

int main(){
    int a, b, c, x, y;
    int ans = 0;
    cin >> a >> b >> c >> x >> y;
    if(a + b >= 2 * c){
        ans += 2 * c * min(x,y);
        int x_nokori = x - min(x,y);
        int y_nokori = y - min(x,y);
        if(2*c*(x_nokori + y_nokori) <= a*x_nokori + b*y_nokori){
            cout << ans + 2*c*(x_nokori + y_nokori) << endl;
        }else{
            cout << ans + a*x_nokori + b*y_nokori << endl;
        }

    }else{
        cout << x*a + y*b << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<ll(n);i++)

#define MOD = 1000000007

int main(){
    int ans = 0;
    string s;
    cin >> s;
    rep(i,s.size()){
        int cnt = 0;
        for(int j=i;j<s.size();j++){
            if((s[j] != 'A') && (s[j] != 'C') && (s[j] != 'G') && (s[j] != 'T')){
                if(cnt > ans) ans = cnt;
                break;
            }
            cnt++;
            if(j==s.size()-1){
                if(cnt > ans) ans = cnt;
            }
        }
    }
    cout << ans << endl;
}

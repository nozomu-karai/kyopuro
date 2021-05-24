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

VV<bool> seen(90, V<bool>(90));
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int m, n;

int dfs(VV<int> &field, int i, int j, int depth){
    cnt++;
    for (int dir = 0; dir < 4; ++dir) {
        int ni = i + dx[dir];
        int nj = j + dy[dir];
        if (ni < 0 || ni >= m || nj < 0 || nj >= n) continue;
        if (field[nh][nw] == '0') continue;
        if (seen[ni][nj]) continue;
        dfs(field, ni, nj);
}

int main(){
    cin >> m >> n;
    VV<int> field(n, V<int>(n));
    rep(i,n) reo(j,m) cin >> field[i][j];
    rep(i,n) reo(j,m) seen[i][j] = false;
    int cnt = 0;
    rep(i,n) rep(j,m){
        if(seen[i][j]) continue;
        if(field[i][j] == 0) continue;
        int tmp = dfs(field, i, j);
        ans = max(tmp, ans);
    }
}
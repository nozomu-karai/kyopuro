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

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    int r, c;
    cin >> r >> c;
    pii s, g;
    cin >> s.first >> s.second;
    cin >> g.first >> g.second;
    s.first--; s.second--; g.first--; g.second--;
    V<string> G(r);
    VV<int> cnt(r, V<int>(c));
    rep(i,r) cin >> G[i];
    rep(i,r) rep(j,c) cnt[i][j] = 1e9;
    queue<pii> que;
    que.push(s);
    cnt[s.first][s.second] = 0;
    while(!que.empty()){
        pii v = que.front();
        que.pop();
        rep(i,4){
            pii nv = v;
            nv.first += dx[i];
            nv.second += dy[i];
            if(cnt[nv.first][nv.second] != 1e9) continue;
            if(G[nv.first][nv.second] == '#') continue;
            if (nv.first < 0 || nv.first >= r || nv.second < 0 || nv.second >= c) continue;
            cnt[nv.first][nv.second] = cnt[v.first][v.second] + 1;
            que.push(nv);
        }
        
    }
    cout << cnt[g.first][g.second] << endl;
}
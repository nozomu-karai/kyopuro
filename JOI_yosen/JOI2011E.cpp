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
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int h, w, n;
    cin >> h >> w >> n;
    V<string> field(h);
    rep(i,h) cin >> field[i];
    VV<bool> seen(h, V<bool>(w));
    rep(i,h) rep(j,w) seen[i][j] = false;
    pii s;
    seen[s.first][s.second] =true;
    rep(i,h) rep(j,w){
        if(field[i][j] == 'S'){
            s.first = i;
            s.second = j;
        }
    }
    queue<pii> que;
    que.push(s);
    int mouse = 1;
    int ans = 0;
    while(!que.empty()){
        pii v = que.front();
        rep(i,4){
            pii nv = v;
            nv.first += dx[i];
            nv.second += dy[i];
            if(seen[nv.first][nv.second]) continue;
            if(field[nv.first][nv.second] == 'X') continue;
            if (nv.first < 0 || nv.first >= h || nv.second < 0 || nv.second >= w) continue;
            if(field[nv.first][nv.second] != '.'){
                int num = field[nv.first][nv.second] - '0';
                if(mouse >= num){
                    mouse += num;
                    queue<pii> empty;
                    swap(que, empty);
                    rep(j,h) rep(k,w) seen[j][w] = false;
                    seen[nv.first][nv.second] = true;
                    que.push(nv);
                    break;
                }
            }
            que.push(nv);
        }
    }
}
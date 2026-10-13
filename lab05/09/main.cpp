#include <bits/stdc++.h>

#define int long long
#define int128 __int128

using namespace std;

signed main(){
    int n;
    cin >> n;
    vector <int> otv(n);
    for (int i = 0; i < n; ++i){
        vector <pair <int, int> > v(4);
        for (int j = 0; j < 4; ++j){
            cin >> v[j].first >> v[j].second;
            if (v[j].second < 0) {
                v[j].first = -v[j].first;
                v[j].second = -v[j].second;
            }
        }
        int128 p1 = (v[0].first*v[1].second)+(v[1].first*v[0].second);
        int128 p2 = (v[2].first*v[3].second)+(v[3].first*v[2].second);
        int128 q1 = v[0].second * v[1].second;
        int128 q2 = v[2].second * v[3].second;
        int128 a = p1 * q2;
        int128 b = p2 * q1;
        if (a == b){
            otv[i] = 0;
        }
        else if (a < b){
            otv[i] = -1;
        }
        else {
            otv[i] = 1;
        }
    }
    for (auto x : otv){
        cout << x << " ";
    }
}

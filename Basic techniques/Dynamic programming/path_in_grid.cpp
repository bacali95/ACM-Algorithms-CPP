#include <bits/stdc++.h>
#include <chrono>

#define ll long long

using namespace std;
using namespace std::chrono;

size_t n;
vector<vector<ll>> value;
ll memo[1000][1000];

ll solve(ll x, ll y) {
    if (x == n || y == n) {
        return 0;
    }
    if (memo[x][y] != -1) {
        return memo[x][y];
    }
    return memo[x][y] = max(solve(x + 1, y), solve(x, y + 1)) + value[x][y];
}

int main(int argc, char** argv) {
    memset(memo, -1, sizeof(memo));
    value = {{3, 7, 9, 2, 7},
             {9, 8, 3, 5, 5},
             {1, 7, 9, 8, 5},
             {3, 8, 6, 4, 10},
             {6, 3, 9, 7, 8}};
    n = value.size();

    cout << "Val dp : " << solve(0, 0) << endl;

    ll sum[n + 1][n + 1];
    memset(sum, 0, sizeof(sum));
    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= n; x++) {
            sum[y][x] = max(sum[y][x - 1], sum[y - 1][x]) + value[y - 1][x - 1];
        }
    }
    cout << "Val it : " << sum[n][n] << endl;

    return 0;
}
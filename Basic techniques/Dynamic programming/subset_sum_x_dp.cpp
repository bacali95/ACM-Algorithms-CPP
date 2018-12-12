#include <bits/stdc++.h>

using namespace std;

int n(7);
vector<int> v;
int dp[1000][1000];

int search(int i, int s) {
    if (i == n) {
        return s == 0;
    }
    if (dp[i][s] != -1) {
        return dp[i][s];
    }
    int cnt = search(i + 1, s);
    cnt += search(i + 1, s - v[i]);
    return dp[i][s] = cnt;
}

int main(int argc, char **argv) {
    v = {1, 2, 3, 10};
    int s = 2;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= s; ++j) {
            dp[i][j] = -1;
        }
    }
    cout << search(0, s) << endl;
    return 0;
}
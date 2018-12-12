#include <bits/stdc++.h>

using namespace std;

int n(7);
vector<int> v;
int dp[1000][1000];

int search(int i, int s, string ch) {
    if (i == n) {
        return s == 0 ? 1 : 0;
    }
    if (dp[i][s] == -1) {
        int cnt = search(i + 1, s, ch);
        cnt += search(i + 1, s - v[i], ch + to_string(i) + ", ");
        dp[i][s] = cnt;
    }
    return dp[i][s];
}

int main(int argc, char **argv) {
    v = {1, 2, 3, 10};
    int s = 12;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= s; ++j) {
            dp[i][j] = -1;
        }
    }
    cout << (search(0, s, "") > 0) << endl;
    return 0;
}
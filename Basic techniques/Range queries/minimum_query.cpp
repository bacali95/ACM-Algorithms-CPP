#include <bits/stdc++.h>

using namespace std;

#define size(v) v.size()

int n = 8;
int tab[] = {1, 3, 4, 8, 6, 1, 4, 2, 1 << 20};
map<int, map<int, int>> memo;

int query(int a, int b) {
    int c = b - a + 1;
    int k = (1 << (int)(log(c) / log(2)));
    return min(memo[a][a + k - 1], memo[b - k + 1][b]);
}

int main(int argc, char** argv) {
    for (int i = 0; i < n; i++) {
        memo[i][i] = tab[i];
        memo[i][i + 1] = min(tab[i], tab[i + 1]);
    }
    for (int i = 1; (1 << i) <= n; i++) {
        int w = (1 << i) / 2;
        for (int j = 0; j <= n - 2 * w; j++) {
            memo[j][j + 2 * w - 1] =
                min(memo[j][j + w - 1], memo[j + w][j + 2 * w - 1]);
        }
    }
    cout << "Queries :" << endl;
    cout << "min(3,6)= " << query(3, 6) << endl; // 1
    cout << "min(1,4)= " << query(1, 4) << endl; // 3
}
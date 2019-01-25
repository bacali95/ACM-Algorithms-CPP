#include <bits/stdc++.h>

#define size(v) v.size()

using namespace std;

int n(4);
vector<int> v;
int memo[1000][1000];

int editDist(string s1, string s2, int n, int m) {
    if (n == 0) {
        return m;
    }
    if (m == 0) {
        return n;
    }
    if (memo[n][m] != -1) {
        return memo[n][m];
    }
    if (s1[n - 1] == s2[m - 1]) {
        return memo[n][m] = editDist(s1, s2, n - 1, m - 1);
    }
    return memo[n][m] = 1 + min(editDist(s1, s2, n, m - 1),         // Insert
                                min(editDist(s1, s2, n - 1, m),     // Remove
                                    editDist(s1, s2, n - 1, m - 1)) // Replace
                            );
}

int main(int argc, char** argv) {
    memset(memo, -1, sizeof(memo));
    string s1 = "LOVE";
    string s2 = "MOVIE";
    cout << editDist(s1, s2, size(s1), size(s2)) << endl;
    return 0;
}
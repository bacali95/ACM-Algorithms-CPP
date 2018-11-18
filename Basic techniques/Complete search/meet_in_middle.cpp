#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n = 6;
ll s = 14;
ll a[] = {3, 34, 4, 12, 5, 2};
ll X[2000005], Y[2000005];

void calc_sub_array(ll *x, int n, int c) {
    for (int i = 0; i < (1 << n); i++) {
        ll s = 0;
        for (int j = 0; j < n; j++)
            if (i & (1 << j))
                s += a[j + c];
        x[i] = s;
    }
}

bool solve() {
    calc_sub_array(X, n / 2, 0);
    calc_sub_array(Y, n - n / 2, n / 2);

    int size_X = 1 << (n / 2);
    int size_Y = 1 << (n - n / 2);

    sort(Y, Y + size_Y);

    for (int i = 0; i < size_X; i++) {
        if (X[i] <= s) {
            auto j = lower_bound(Y, Y + size_Y, s - X[i]) - Y;
            if (j == size_Y || Y[j] != (s - X[i])) {
                j--;
            }
            if (Y[j] + X[i] == s) {
                return true;
            }
        }
    }
    return false;
}

int main(int argc, char **argv) {
    cout << solve() << endl;
    return 0;
}

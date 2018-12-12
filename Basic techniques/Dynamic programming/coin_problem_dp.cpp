#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll limit(1000), n;
vector<ll> coins;
ll value[1000];
ll first[1000];
ll cnt[1000];

ll dp(ll x) {
    if (x == 0) return 0;
    if (value[x] != -1) return value[x];
    ll best = INT64_MAX;
    for (auto c : coins) {
        if (x - c >= 0) {
            best = min(best, dp(x - c) + 1);
            cnt[x] += cnt[x - c];
            cnt[x] %= mod;
        }
    }
    return value[x] = best;
}

void iterative() {
    value[0] = 0;
    for (int x = 1; x <= limit; x++) {
        value[x] = INT64_MAX;
        for (auto c : coins) {
            if (x - c >= 0 && value[x - c] + 1 < value[x]) {
                value[x] = value[x - c] + 1;
                first[x] = c;
            }
        }
    }
}

int main(int argc, char **argv) {
    n = 5;
    cnt[0] = 1;
    coins = {1, 3, 4};

    //Dp way
    memset(value, -1, sizeof(value));
    cout << dp(n) << endl;

    //Iterative way
    memset(value, -1, sizeof(value));
    iterative();
    cout << value[n] << endl;

    //Counting the number of solutions
    cout << cnt[n] << endl;

    //Constructing a solution
    while (n > 0) {
        cout << first[n] << " \n"[n == first[n]];
        n -= first[n];
    }

    return 0;
}
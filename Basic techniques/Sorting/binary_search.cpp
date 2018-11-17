#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(int argc, char **argv) {
    ll x = 4;
    int n = 8;
    //Sorted array
    vector<ll> v = {1, 2, 2, 2, 4, 5, 8, 9};

    //Method 1
    int l = 0, r = n - 1;
    while (l <= r) {
        int k = (l + r) / 2;
        if (v[k] == x) {
            cout << "Method 1: found at " << k << endl;
            break;
        } else if (v[k] > x) {
            r = k - 1;
        } else {
            l = k + 1;
        }
    }

    //Method 2
    int k = 0;
    for (int b = n / 2; b >= 1; b /= 2) {
        while (k + b < n && v[k + b] <= x) k += b;
    }
    if (v[k] == x) {
        cout << "Method 2: found at " << k << endl;
    }

    //C++ functions
    auto lb = lower_bound(v.begin(), v.end(), x) - v.begin();
    cout << "Lower bound: " << lb << endl;

    auto ub = upper_bound(v.begin(), v.end(), x) - v.begin();
    cout << "Upper bound: " << ub << endl;

    auto rg = equal_range(v.begin(), v.end(), x);
    cout << "Equal rang: " << rg.second - rg.first << endl;

    return 0;
}


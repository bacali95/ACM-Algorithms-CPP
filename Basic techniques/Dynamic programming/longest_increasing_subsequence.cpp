#include <bits/stdc++.h>

#define ll long long

using namespace std;

size_t n;
vector<ll> v;

ll LIS() {
    vector<ll> tail(n, 0);
    int length = 1;

    tail[0] = v[0];
    for (size_t i = 1; i < n; i++) {
        if (v[i] > tail[length - 1]) {
            tail[length++] = v[i];
        } else {
            auto it = find(tail.begin(), tail.begin() + length, v[i]);
            if (it == tail.begin() + length) {
                it = upper_bound(tail.begin(), tail.begin() + length, v[i]);
                *it = v[i];
            }
        }
    }

    return length;
}

int main(int argc, char** argv) {
    v = {6, 2, 5, 1, 7, 4, 8, 3};
    n = v.size();

    cout << LIS() << endl;
    return 0;
}
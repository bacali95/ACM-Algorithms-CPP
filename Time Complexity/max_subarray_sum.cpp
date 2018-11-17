#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(int argc, char **argv) {
    int n = 8;
    ll array[n] = {-1, 2, 4, -3, 5, 2, -5, 2};
    ll best = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }
    cout << best << endl;
    return 0;
}


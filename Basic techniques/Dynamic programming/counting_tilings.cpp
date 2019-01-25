#include <bits/stdc++.h>

typedef long long ll;
#define PI acos(-1)
using namespace std;

double solve(double n, double m) {
    double res = 1.0;
    for (double i = 1; i <= (n + 1) / 2; i++) {
        for (double j = 1; j <= (m + 1) / 2; j++) {
            double a = cos((PI * i) / (n + 1.0));
            double b = cos((PI * j) / (m + 1.0));
            res *= (4.0 * a * a + 4.0 * b * b);
        }
    }
    return res;
}

int main(int argc, char** argv) {
    cout << fixed << setprecision(0) << solve(4, 7) << endl;
    return 0;
}
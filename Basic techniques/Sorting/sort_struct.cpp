#include <bits/stdc++.h>

typedef long long ll;

#define pb push_back

struct St {
    ll x, y;

    bool operator<(const St &b) {
        if (x == b.x) {
            return y < b.y;
        }
        return x < b.x;
    }
};

using namespace std;

int main(int argc, char **argv) {
    int n = 8;
    vector<St> v;
    for (int i = 0; i < n; ++i) {
        St st{};
        st.x = random() % 100;
        st.y = random() % 100;
        v.pb(st);
    }
    sort(v.begin(), v.end());
    return 0;
}


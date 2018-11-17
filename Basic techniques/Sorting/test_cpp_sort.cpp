#include <bits/stdc++.h>

typedef long long ll;

#define pb push_back

using namespace std;

int main(int argc, char **argv) {
    int n = 8;
    //Ordinary array
    ll tab[n] = {5, 2, 4, 8, 9, 2, 1, 2};
    //Increasing order
    sort(tab, tab + n);
    //Decreasing order
    sort(tab, tab + n, greater<int>());

    //Vector
    vector<ll> vec = {5, 2, 4, 8, 9, 2, 1, 2};
    //Increasing order
    sort(vec.begin(), vec.end());
    //Decreasing order
    sort(vec.rbegin(), vec.rend());

    //String
    string s = "bacali";
    sort(s.begin(), s.end());

    //Pair
    vector<pair<ll, ll>> vp;
    vp.pb({1, 5});
    vp.pb({2, 3});
    vp.pb({1, 2});
    sort(vp.begin(), vp.end());

    //Tuple
    vector<tuple<ll, ll, ll>> vt;
    vt.pb({1, 5, 6});
    vt.pb({2, 5, 7});
    vt.pb({1, 2, 4});
    sort(vt.begin(), vt.end());
    return 0;
}


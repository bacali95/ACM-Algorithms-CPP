#include <bits/stdc++.h>

typedef long long ll;

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

    return 0;
}


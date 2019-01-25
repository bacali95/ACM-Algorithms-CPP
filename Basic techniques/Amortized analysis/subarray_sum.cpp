#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int x, n, s, l, r;
    s = 0, l = 0, r = 0;
    x = 8;
    n = 8;
    int tab[] = {1, 3, 2, 5, 1, 1, 2, 3};
    while (l < n) {
        while (l < n && s + tab[l] <= x) {
            s += tab[l++];
            if (s == x) {
                cout << "found " << l - r << " elemnts" << endl;
                return 0;
            }
        }
        if (s == 0) {
            l++, r++;
            continue;
        }
        s -= tab[r++];
    }
    cout << "not found" << endl;
    return 0;
}
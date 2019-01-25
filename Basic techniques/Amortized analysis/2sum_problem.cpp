#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int x, n, s, l, r;
    x = 16;
    n = 8;
    int tab[] = {5, 6, 7, 9, 9, 1, 4, 10};
    sort(tab, tab + n);
    l = 0, r = n - 1;
    while (l < r) {
        while (l < r && tab[l] + tab[r] >= x) {
            if (tab[l] + tab[r] == x) {
                cout << "found (" << tab[l] << "," << tab[r] << ")" << endl;
                return 0;
            }
            r--;
        }
        l++;
    }
    cout << "not found" << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int x, n, s, l, r;
    x = 20;
    n = 8;
    int tab[] = {5, 6, 7, 9, 9, 1, 4, 10};
    sort(tab, tab + n);
    for (int i = 0; i < n - 2; i++) {
        l = i + 1, r = n - 1;
        while (l < r) {
            while (l < r && tab[i] + tab[l] + tab[r] >= x) {
                if (tab[i] + tab[l] + tab[r] == x) {
                    cout << "found (" << tab[i] << "," << tab[l] << ","
                         << tab[r] << ")" << endl;
                    return 0;
                }
                r--;
            }
            l++;
        }
    }
    cout << "not found" << endl;
    return 0;
}
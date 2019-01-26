#include <bits/stdc++.h>

using namespace std;

#define size(v) v.size()

int n = 8;
int tab[] = {0, 1, 3, 4, 8, 6, 1, 4, 2};
int diff[9];

void update(int l, int r, int x) { diff[l] += x, diff[r + 1] -= x; }

void aff() {
    for (int i = 0; i < n; i++) {
        if (!i) {
            tab[i] = diff[i];
        } else {
            tab[i] = diff[i] + tab[i - 1];
        }
        cout << tab[i] << " \n"[i == n - 1];
    }
}

void init() {
    diff[0] = tab[0], diff[n] = 0;
    for (int i = 1; i < n; i++) {
        diff[i] = tab[i] - tab[i - 1];
    }
}

int main(int argc, char** argv) {
    init();
    cout << "Queries :" << endl;
    aff();
    cout << "update(1,5,1)" << endl;
    update(1, 5, 1);
    aff();
    cout << "update(6,7,-1)" << endl;
    update(6, 7, -1);
    aff();
}
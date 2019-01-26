#include <bits/stdc++.h>

using namespace std;

#define size(v) v.size()

int n = 8;
int tab[] = {0, 1, 3, 4, 8, 6, 1, 4, 2};
int tree[8];

int sum(int k) {
    if (!k) {
        return 0;
    }
    return tree[k] + sum(k - (k & -k));
}

void add(int k, int x) {
    if (k > n) {
        return;
    }
    tree[k] += x;
    add(k + (k & -k), x);
}

int query(int a, int b) { return sum(b) - sum(a - 1); }

void init() {
    for (int i = 1; i <= n; i++) {
        add(i, tab[i]);
    }
}

int main(int argc, char** argv) {
    init();
    cout << "Queries :" << endl;
    cout << "sum(3,6)= " << query(3, 6) << endl; // 19
    cout << "sum(2,7)= " << query(2, 7) << endl; // 26
    cout << "update(2,2)" << endl;
    add(2, 2 - tab[2]);
    tab[2] = 2;
    cout << "sum(2,7)= " << query(2, 7) << endl; // 25
}
#include <bits/stdc++.h>

using namespace std;

#define size(v) v.size()

int n = 8;
int tab[] = {5, 8, 6, 3, 2, 7, 2, 6};
int st[4 * 8];

int left(int x) { return x << 1; }

int right(int x) { return (x << 1) + 1; }

int build(int p, int l, int r) {
    if (l == r) {
        return st[p] = tab[l];
    }
    return st[p] = build(left(p), l, (l + r) / 2) +
                   build(right(p), (l + r) / 2 + 1, r);
}

int query(int p, int l, int r, int L, int R) {
    if (L > r || R < l) {
        return 0;
    }
    if (l >= L && R >= r) {
        return st[p];
    }
    return query(left(p), l, (l + r) / 2, L, R) +
           query(right(p), (l + r) / 2 + 1, r, L, R);
}

int query(int L, int R) { return query(1, 0, n - 1, L, R); }

void update(int p, int l, int r, int i, int val) {
    if (i < l || i > r) {
        return;
    }
    st[p] = st[p] + val;
    if (l != r) {
        update(left(p), l, (l + r) / 2, i, val);
        update(right(p), (l + r) / 2 + 1, r, i, val);
    }
}

void update(int i, int newVal) {
    int val = newVal - tab[i];
    tab[i] = newVal;
    update(1, 0, n - 1, i, val);
}

int main(int argc, char** argv) {
    build(1, 0, n - 1);
    cout << "Queries :" << endl;
    cout << "sum(2,7)= " << query(2, 7) << endl; // 26
    cout << "update(2,7)" << endl;
    update(2, 7);
    cout << "sum(2,7)= " << query(2, 7) << endl; // 27
}
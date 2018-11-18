#include <bits/stdc++.h>

using namespace std;

int n(8), cnt(0);
bool column[1000];
bool diag1[2000];
bool diag2[2000];

void search(int y) {
    if (y == n) {
        cnt++;
        return;
    }
    for (int x = 0; x < n; ++x) {
        if (column[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
        column[x] = diag1[x + y] = diag2[x - y + n - 1] = true;
        search(y + 1);
        column[x] = diag1[x + y] = diag2[x - y + n - 1] = false;
    }

}

int main(int argc, char **argv) {
    search(0);
    printf("We have %d valid ways to put %d queens in %d*%d board!", cnt, n, n, n);
    return 0;
}
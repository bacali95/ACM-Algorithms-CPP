#include <bits/stdc++.h>

using namespace std;

int n(7), cnt(0);
int grid[10][10];

void search(int x, int y, int oldX, int oldY, int step) {
    if (x - oldX == 1) {
        if ((x == n - 1 || grid[x + 1][y]) && y > 0 && y < n - 1 && !grid[x][y - 1] && !grid[x][y + 1]) {
            return;
        }
    } else if (x - oldX == -1) {
        if ((x == 0 || grid[x - 1][y]) && y > 0 && y < n - 1 && !grid[x][y - 1] && !grid[x][y + 1]) {
            return;
        }
    } else if (y - oldY == 1) {
        if ((y == n - 1 || grid[x][y + 1]) && x > 0 && x < n - 1 && !grid[x - 1][y] && !grid[x + 1][y]) {
            return;
        }
    } else {
        if ((y == 0 || grid[x][y - 1]) && x > 0 && x < n - 1 && !grid[x - 1][y] && !grid[x + 1][y]) {
            return;
        }
    }
    if (x == n - 1 && y == n - 1) {
        step == n * n ? cnt++ : cnt;
        return;
    }
    if (oldX == -1 && oldY == -1) {
        grid[x][y] = step;
        search(x + 1, y, x, y, step + 1);
        grid[x][y] = 0;
        return;
    }
    grid[x][y] = step;
    if (x > 0 && !grid[x - 1][y]) {
        search(x - 1, y, x, y, step + 1);
    }
    if (x < n - 1 && !grid[x + 1][y]) {
        search(x + 1, y, x, y, step + 1);
    }
    if (y > 0 && !grid[x][y - 1]) {
        search(x, y - 1, x, y, step + 1);
    }
    if (y < n - 1 && !grid[x][y + 1]) {
        search(x, y + 1, x, y, step + 1);
    }
    grid[x][y] = 0;
}

int main(int argc, char **argv) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            grid[i][j] = 0;
        }
    }
    search(0, 0, -1, -1, 1);
    cout << cnt * 2 << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int n(4);
vector<int> subset;

void search(int k) {
    if (k == n) {
        for (auto it:subset) {
            cout << it << " ";
        }
        cout << endl;
    } else {
        search(k + 1);
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
    }
}

int main(int argc, char **argv) {
    //Method 1
    search(0);

    //Method 2
    for (int b = 0; b < (1 << n); b++) {
        subset.clear();
        for (int i = 0; i < n; i++) {
            if (b & (1 << i)) subset.push_back(i);
        }
        for (auto it:subset) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
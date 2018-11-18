#include <bits/stdc++.h>

using namespace std;

int n(4);
bool chosen[1000];
vector<int> permutation;

void search() {
    if (permutation.size() == n) {
        for (auto it:permutation) {
            cout << it << " ";
        }
        cout << endl;
    } else {
        for (int i = 0; i < n; ++i) {
            if (!chosen[i]) {
                chosen[i] = true;
                permutation.push_back(i);
                search();
                chosen[i] = false;
                permutation.pop_back();
            }
        }
    }
}

int main(int argc, char **argv) {
    //Method 1
    search();

    //Method 2
    for (int i = 0; i < n; ++i) {
        permutation.push_back(i);
    }
    do {
        cout << endl;
        for (auto it:permutation) {
            cout << it << " ";
        }
    } while (next_permutation(permutation.begin(), permutation.end()));

    return 0;
}
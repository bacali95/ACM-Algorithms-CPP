#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    //work with ranges
    vector<int> v = {4, 1, 2, 6, 0};
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    random_shuffle(v.begin(), v.end());

    //set iterators
    set<int> s = {1, 50, 100};
    auto it = s.begin();
    for (it; it != s.end(); it++) {
        cout << *it << endl;
    }
    it = s.find(4);
    it != s.end() ? cout << "exist" << endl : cout << "not exist" << endl;

    int x = 50;
    it = s.lower_bound(x);
    if (it == s.begin()) {
        cout << *it << endl;
    } else if (it == s.end()) {
        it--;
        cout << *it << endl;
    } else {
        int a = *it;
        it--;
        int b = *it;
        if (x - b < a - x) cout << b << endl;
        else cout << a << endl;
    }

    return 0;
}
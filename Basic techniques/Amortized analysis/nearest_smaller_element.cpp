#include <bits/stdc++.h>

using namespace std;

#define size(v) v.size()

template <class T> ostream& operator<<(ostream& os, vector<T> v) {
    os << "[";
    for (size_t i = 0; i < size(v); i++) {
        os << v[i] << ",]"[i == size(v) - 1];
    }
    return os;
}

int main(int argc, char** argv) {
    int n = 8;
    int tab[] = {1, 3, 4, 2, 5, 3, 4, 2};
    vector<int> ans(n, -1);
    stack<int> s;
    s.push(tab[0]);
    for (int i = 1; i < n; i++) {
        while (!s.empty() && tab[i] <= s.top()) {
            s.pop();
        }
        ans[i] = s.empty() ? -1 : s.top();
        s.push(tab[i]);
    }
    cout << ans << endl;
    return 0;
}
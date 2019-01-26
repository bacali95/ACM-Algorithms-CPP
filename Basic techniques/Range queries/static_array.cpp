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
    int tab[] = {1, 3, 4, 8, 6, 1, 4, 2};
    int acc[n + 1];
    acc[0] = 0;
    for (int i = 0; i < n; i++) {
        acc[i + 1] = tab[i] + acc[i];
    }
    cout << "Queries :" << endl;
    cout << "sum(3,6)= " << acc[6] - acc[2] << endl;
    cout << "sum(1,4)= " << acc[4] - acc[0] << endl;
    return 0;
}
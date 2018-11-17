#include <bits/stdc++.h>

using namespace std;

bool comp(const string &a, const string &b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main(int argc, char **argv) {
    vector<string> vec = {"ba", "aa", "ab", "a", "aba", "aaa", "abcd"};
    sort(vec.begin(), vec.end(), comp);
    return 0;
}


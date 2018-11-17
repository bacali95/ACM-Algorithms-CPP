#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    deque<int> d;
    d.push_back(5); // [5]
    d.push_front(6); // [6,5]
    d.pop_back(); // [6]
    d.pop_front(); // []
    return 0;
}
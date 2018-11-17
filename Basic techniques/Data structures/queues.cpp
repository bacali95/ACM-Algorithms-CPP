#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    queue<int> s;
    s.push(5); // [5]
    s.push(2); // [5,2]
    s.push(3); // [5,2,3]
    cout << s.front() << endl;
    s.pop(); // [2,3]
    cout << s.front() << endl;
    return 0;
}
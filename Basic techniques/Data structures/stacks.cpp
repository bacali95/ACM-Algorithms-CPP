#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    stack<int> s;
    s.push(5); // [5]
    s.push(2); // [2,5]
    s.push(3); // [3,2,5]
    cout << s.top() << endl;
    s.pop(); // [2,5]
    cout << s.top() << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    // decreasing order
    priority_queue<int> s;
    s.push(5);
    s.push(2);
    s.push(3);
    cout << s.top() << endl; // 5
    s.pop();
    cout << s.top() << endl; // 3

    // increasing order
    priority_queue<int, vector<int>, greater<int>> s2;
    s2.push(5);
    s2.push(2);
    s2.push(3);
    cout << s2.top() << endl; // 2
    s2.pop();
    cout << s2.top() << endl; // 3
    return 0;
}
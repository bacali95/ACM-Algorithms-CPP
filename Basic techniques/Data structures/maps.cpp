#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    map<string, int> m;
    //add
    m["a"]++;
    m["a"]++;
    m["ab"]++;
    m["ac"]++;

    //remove
    m.erase("a");

    //existence
    m.count("a");

    //first: key, second: value
    for (auto it:m) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
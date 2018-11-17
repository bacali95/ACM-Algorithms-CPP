#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    set<int> s;
    //add
    s.insert(3);
    s.insert(2);
    s.insert(5);

    //remove
    s.erase(3);

    //existence
    s.count(5);

    multiset<int> s2;
    //add
    s2.insert(5);
    s2.insert(5);
    s2.insert(5);

    //count
    s2.count(5);

    //remove once
    s2.erase(s2.find(5));

    //remove all
    s2.erase(5);
    return 0;
}
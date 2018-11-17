#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    bitset<10> s;
    s[1] = true;
    s[3] = true;
    s[4] = true;
    s[7] = true;

    bitset<10> s2(string("0010011010")); // from right to left
    bitset<10> s3(15); // like s3(string("1111"))

    //number bits
    cout << s3.count() << endl;

    //bit operations
    cout << (s2 & s3) << endl;
    cout << (s2 | s3) << endl;
    cout << (s2 ^ s3) << endl;
    return 0;
}
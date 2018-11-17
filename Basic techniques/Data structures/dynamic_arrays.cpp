#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(int argc, char **argv) {
    vector<ll> v;
    //add
    v.push_back(3); //[3]
    v.push_back(2); //[3,2]
    v.push_back(5); //[3,2,5]

    //remove
    v.pop_back(); //[3,2]
    v.pop_back(); //[3]

    //reverse
    reverse(v.begin(), v.end()); //[5,2,3]

    //sort
    sort(v.begin(), v.end()); //[2,3,5]

    //size 10, initial value 0
    vector<int> v2(10);

    //size 10, initial value 5
    vector<int> v3(10, 5);

    //strings
    string a = "hatti";
    string b = a + a; // hattihatti
    b[5] = 'v'; // hattivatti

    string c = b.substr(3, 4); // tiva
    b.append("catti"); // hattivatticatti

    //replace
    b.replace(0, 5, "datti");

    //replace all occ
    unsigned long ind;
    while ((ind = b.find("atti", 0)) != -1) {
        b.replace(ind, 4, "");
    }

    //comparison
    b == "dvc" ? cout << "equals" << endl : cout << "not equals" << endl;

    return 0;
}
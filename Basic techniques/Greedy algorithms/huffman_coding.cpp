#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

map<char, ll> tab;
map<char, string> coding;

typedef struct Node {
    Node *left;
    Node *right;
    char val;
    ll cnt;

    Node() = default;

    Node(const Node &a) {
        cnt = a.cnt;
        val = a.val;
        left = a.left;
        right = a.right;
    }

    bool operator<(const Node &b) const {
        return cnt > b.cnt;
    }

} Node;

void solve(Node node, string code) {
    if (node.left == nullptr && node.right == nullptr) {
        coding[node.val] = move(code);
        return;
    }
    if (node.left != nullptr) {
        string c = code + "1";
        solve(*node.left, c);
    }
    if (node.right != nullptr) {
        string c = code + "0";
        solve(*node.right, c);
    }
}

int main(int argc, char **argv) {
    tab['a'] = 5;
    tab['b'] = 1;
    tab['c'] = 2;
    tab['d'] = 1;

    priority_queue<Node> q;

    for (auto a:tab) {
        Node n;
        n.val = a.first;
        n.cnt = a.second;
        n.left = nullptr;
        n.right = nullptr;
        q.push(n);
    }

    while (q.size() > 1) {
        Node a = q.top();
        q.pop();
        Node b = q.top();
        q.pop();
        Node c;
        c.cnt = a.cnt + b.cnt;
        c.val = '-';
        c.left = new Node(a);
        c.right = new Node(b);

        q.push(c);
    }

    Node root = q.top();

    solve(root, "");

    for (pair<char, string> item:coding) {
        cout << item.first << " " << item.second << endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    string target = "EGYPT";
    string replaceWith = " ";


    size_t pos = S.find(target);
    while (pos != string::npos) {
        S.replace(pos, target.size(), replaceWith);
        pos = S.find(target, pos + 1);
    }

    cout << S;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    int n = S.size();

    if (n == 1) {
        cout << S;
        return 0;
    }

    string best = "";
    bool first = true;

    for (int i = 0; i < n - 1; i++) {

        string X = S.substr(0, i + 1);
        string Y = S.substr(i + 1);


        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());


        string combined = X + Y;

        if (first || combined < best) {
            best = combined;
            first = false;
        }
    }

    cout << best;
    return 0;
}



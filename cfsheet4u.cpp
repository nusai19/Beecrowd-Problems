#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    for (char &c : S) {
        c = tolower(c);
    }

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (char c : S) {
        if (c == 'e') e++;
        else if (c == 'g') g++;
        else if (c == 'y') y++;
        else if (c == 'p') p++;
        else if (c == 't') t++;
    }


    int ans = min({e, g, y, p, t});

    cout << ans;

    return 0;
}


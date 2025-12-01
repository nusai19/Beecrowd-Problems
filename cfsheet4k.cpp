#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        string S, T;
        cin >> S >> T;

        string result = "";
        int n = S.length();
        int m = T.length();

        int mx = max(n, m);

        for (int i = 0; i < mx; i++) {
            if (i < n) result += S[i];
            if (i < m) result += T[i];
        }

        cout << result << endl;
    }

    return 0;
}


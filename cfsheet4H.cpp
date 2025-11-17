#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        bool good = false;
        for (int i = 0; i + 2 < s.size(); i++) {
            if (s.substr(i, 3) == "010" || s.substr(i, 3) == "101") {
                good = true;
                break;
            }
        }

        if (good) cout << "Good\n";
        else cout << "Bad\n";
    }

    return 0;
}


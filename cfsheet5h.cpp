#include <iostream>
using namespace std;


void printChar(int n, char c) {
    for (int i = 1; i <= n; i++) {
        cout << c;
        if (i != n)
            cout << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        char C;
        cin >> N >> C;

        printChar(N, C);
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int a[100];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int start = 0; start < n; start++) {
            int currentMax = a[start];
            for (int end = start; end < n; end++) {
                if (a[end] > currentMax) {
                    currentMax = a[end];
                }
                cout << currentMax << " ";
            }
        }
        cout << endl;
    }

    return 0;
}


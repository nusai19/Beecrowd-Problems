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

        int smallest = 1000000000;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = a[i] + a[j] + (j - i);
                if (sum < smallest) {
                    smallest = sum;
                }
            }
        }

        cout << smallest << endl;
    }

    return 0;
}


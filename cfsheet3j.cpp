#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minElement = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < minElement) {
            minElement = a[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == minElement) {
            count++;
        }
    }

    if (count % 2 == 1)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;

    return 0;
}


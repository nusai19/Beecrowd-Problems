#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            pos = i;
            break;
        }
    }

    cout << pos << endl;
    return 0;
}


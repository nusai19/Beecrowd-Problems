#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lowest = a[0];
    int position = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] < lowest) {
            lowest = a[i];
            position = i + 1;
        }
    }

    cout << lowest << " " << position << endl;

    return 0;
}


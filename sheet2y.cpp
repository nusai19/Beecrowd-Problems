#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long a = 0, b = 1;

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            cout << a;
        } else if (i == 2) {
            cout << " " << b;
        } else {
            long long c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
    }

    cout << endl;
    return 0;
}


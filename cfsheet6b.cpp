#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if (N <= 1) {
        cout << "NO";
        return 0;
    }

    if (N == 2) {
        cout << "YES";
        return 0;
    }

    if (N % 2 == 0) {
        cout << "NO";
        return 0;
    }

    for (long long i = 3; i * i <= N; i += 2) {
        if (N % i == 0) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}


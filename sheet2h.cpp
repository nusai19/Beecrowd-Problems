#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X;
    cin >> X;

    bool isPrime = true;

    if (X < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(X); i++) {
            if (X % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


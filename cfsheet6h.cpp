S#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long G = gcd(A, B);
    long long L = (A / G) * B;

    cout << G << " " << L;
    return 0;
}


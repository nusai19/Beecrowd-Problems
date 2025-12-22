#include <iostream>
using namespace std;

int main() {
    long long A, B, X;
    cin >> A >> B >> X;

    if (A > B)
        swap(A, B);

    long long first = ((A + X - 1) / X) * X;

    long long last = (B / X) * X;

    if (first > last) {
        cout << 0;
        return 0;
    }

    long long count = ((last - first) / X) + 1;
    long long sum = count * (first + last) / 2;

    cout << sum;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    long long A, B, Q;
    cin >> A >> B >> Q;

    if (Q % 3 == 1)
        cout << A;
    else if (Q % 3 == 2)
        cout << B;
    else
        cout << (A ^ B);

    return 0;
}
N

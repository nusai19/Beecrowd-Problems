S#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    if (A > B)
        swap(A, B);

    long long totalSum = (B - A + 1) * (A + B) / 2;

    long long firstEven = (A % 2 == 0) ? A : A + 1;
    long long lastEven  = (B % 2 == 0) ? B : B - 1;

    long long evenSum = 0;
    if (firstEven <= lastEven) {
        long long countEven = ((lastEven - firstEven) / 2) + 1;
        evenSum = countEven * (firstEven + lastEven) / 2;
    }

    long long oddSum = totalSum - evenSum;

    cout << totalSum << endl;
    cout << evenSum << endl;
    cout << oddSum << endl;

    return 0;
}


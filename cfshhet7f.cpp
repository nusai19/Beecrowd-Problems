#include <iostream>
using namespace std;

int N;
long long A[1005];

void printEvenReverse(int index) {

    if (index >= N)
        return;

    printEvenReverse(index + 2);

    cout << A[index] << " ";
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }


    printEvenReverse(0);

    return 0;
}


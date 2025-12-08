#include <iostream>
using namespace std;

void shiftRight(int arr[], int n, int x) {
    x = x % n;
    if (x == 0) return;

    int temp[x];

    for (int i = 0; i < x; i++) {
        temp[i] = arr[n - x + i];
    }

    for (int i = n - 1; i >= x; i--) {
        arr[i] = arr[i - x];
    }


    for (int i = 0; i < x; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int N, X;
    cin >> N >> X;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    shiftRight(A, N, X);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}


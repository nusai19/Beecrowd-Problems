#include <iostream>
using namespace std;

void shiftZeros(int arr[], int n) {
    int pos = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[pos] = arr[i];
            pos++;
        }
    }

    for (int i = pos; i < n; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    shiftZeros(A, N);

    return 0;
}


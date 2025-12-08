#include <iostream>
using namespace std;

void createNewArray(int A[], int B[], int N) {
    int C[2 * N];
    for (int i = 0; i < N; i++) {
        C[i] = B[i];
    }

    for (int i = 0; i < N; i++) {
        C[N + i] = A[i];
    }

    for (int i = 0; i < 2 * N; i++) {
        cout << C[i] << " ";
    }
}

int main() {
    int N;
    cin >> N;

    int A[N], B[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    createNewArray(A, B, N);

    return 0;
}


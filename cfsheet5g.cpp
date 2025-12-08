#include <iostream>
using namespace std;

void findMinMax(int arr[], int n) {
    int mn = arr[0];
    int mx = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < mn)
            mn = arr[i];
        if (arr[i] > mx)
            mx = arr[i];
    }

    cout << mn << " " << mx;
}

int main() {
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    findMinMax(A, N);

    return 0;
}


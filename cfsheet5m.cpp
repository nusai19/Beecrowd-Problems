#include <iostream>
using namespace std;

int countDistinct(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
            count++;
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int distinctCount = countDistinct(A, N);
    cout << distinctCount;

    return 0;
}


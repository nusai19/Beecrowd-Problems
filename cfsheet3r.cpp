#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[1000], B[1000];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    sort(A, A + N);
    sort(B, B + N);
    bool same = true;
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            same = false;
            break;
        }
    }

    if (same)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}


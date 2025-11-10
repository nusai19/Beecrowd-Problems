#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N + 1);
    vector<long long> prefix(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        prefix[i] = prefix[i - 1] + A[i];
    }

    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;
        long long sum = prefix[R] - prefix[L - 1];
        cout << sum << endl;
    }

    return 0;
}


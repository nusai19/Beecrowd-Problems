#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    int count = 1;

    for (int i = 1; i < N; i++) {
        if (S[i] != S[i - 1]) {
            count++;
        }
    }

    cout << count;

    return 0;
}


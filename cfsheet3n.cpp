#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    string S;
    cin >> A >> B >> S;
    if (S[A] != '-') {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < S.size(); i++) {
        if (i == A) continue;
        if (S[i] < '0' || S[i] > '9') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

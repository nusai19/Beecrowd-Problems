#include <iostream>
using namespace std;

int main() {
    char S;
    int N;

    cin >> S;
    cin >> N;

    int X;

    for (int i = 0; i < N; i++) {
        cin >> X;

        for (int j = 0; j < X; j++) {
            cout << S;
        }

        cout << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    long long sum = 0;
    for (char c : S) {
        sum += (c - '0');
    }

    cout << sum;

    return 0;
}


#include <iostream>
using namespace std;

bool isOdd(int n) {
    return (n % 2 == 1);
}

bool isBinaryPalindrome(int n) {
    int binary[32];
    int len = 0;
    while (n > 0) {
        binary[len] = n % 2;
        n /= 2;
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (binary[i] != binary[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    if (isOdd(N) && isBinaryPalindrome(N))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}


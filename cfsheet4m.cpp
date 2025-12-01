#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    string target = "hello";
    int j = 0;

    for (char c : S) {
        if (c == target[j]) {
            j++;
        }
        if (j == 5) break;
    }

    if (j == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}


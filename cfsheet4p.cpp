#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    int count = 0;
    bool inWord = false;

    for (char c : S) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << count << endl;
    return 0;
}


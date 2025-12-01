#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    string word;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] != ' ') {
            word += S[i];
        } else {
            reverse(word.begin(), word.end());
            cout << word << " ";
            word = "";
        }
    }

    reverse(word.begin(), word.end());
    cout << word << endl;

    return 0;
}


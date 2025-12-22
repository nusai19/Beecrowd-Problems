#include <iostream>
#include <string>
using namespace std;

int countVowels(const string &s, int index) {

    if (index == s.length())
        return 0;

    char ch = tolower(s[index]);

    int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' ||
                   ch == 'o' || ch == 'u');
    return isVowel + countVowels(s, index + 1);
}

int main() {
    string S;

    getline(cin, S);

    cout << countVowels(S, 0);

    return 0;
}


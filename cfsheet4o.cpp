#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int freq[26] = {0};

    char c;
    while (cin >> c) {
        if (c >= 'a' && c <= 'z')
            freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        while (freq[i]--) {
            cout << char('a' + i);
        }
    }
    return 0;
}


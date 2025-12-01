#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    string S;
    cin >> S;

    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string Key      = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    unordered_map<char, char> enc, dec;

    for (int i = 0; i < Original.size(); i++) {
        enc[Original[i]] = Key[i];
        dec[Key[i]] = Original[i];
    }

    for (char &c : S) {
        if (Q == 1)
            c = enc[c];
        else
            c = dec[c];
    }

    cout << S;

    return 0;
}





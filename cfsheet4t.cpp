#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    getline(cin, S);

    int pos = S.find('?');
    string query = S.substr(pos + 1);

    vector<string> parts;
    string temp = "";
    for (char c : query) {
        if (c == '&') {
            parts.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    parts.push_back(temp);

    unordered_map<string, string> mp;

    for (string p : parts) {
        int eq = p.find('=');
        string key = p.substr(0, eq);
        string value = p.substr(eq + 1);
        mp[key] = value;
    }

    cout << "username: " << mp["username"] << "\n";
    cout << "pwd: " << mp["pwd"] << "\n";
    cout << "profile: " << mp["profile"] << "\n";
    cout << "role: " << mp["role"] << "\n";
    cout << "key: " << mp["key"] << "\n";

    return 0;
}


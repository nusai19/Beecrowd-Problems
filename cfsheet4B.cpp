#include <iostream>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    int pos = S.find('\\');
    cout << S.substr(0, pos) << endl;

    return 0;
}


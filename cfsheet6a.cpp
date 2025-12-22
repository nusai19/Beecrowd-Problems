#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if ((N & (N - 1)) == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}


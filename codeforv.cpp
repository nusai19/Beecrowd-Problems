#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num = 1;

    for (int i = 1; i <= N; i++) {
        cout << num << " " << num + 1 << " " << num + 2 << " PUM" << endl;
        num += 4;
    }

    return 0;
}


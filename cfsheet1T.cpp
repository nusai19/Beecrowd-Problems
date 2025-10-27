#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int arr[3] = {A, B, C};
    sort(arr, arr + 3);

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }

    cout << endl;

    cout << A << endl << B << endl << C << endl;

    return 0;
}


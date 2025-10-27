#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double N;
    cin >> N;

    int int_part = int(N);
    double decimal_part = N - int_part;

    if (decimal_part == 0) {
        cout << "int " << int_part << endl;
    } else {
        cout << "float " << int_part << " ";
        cout << fixed << setprecision(10) << decimal_part << endl;
    }

    return 0;
}


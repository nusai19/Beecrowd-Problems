#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum = 0;
    long long count = 0;
    long long i = 1;

    while (sum + i <= N) {
        sum += i;
        count++;
        i++;
    }

    cout << count;
    return 0;
}


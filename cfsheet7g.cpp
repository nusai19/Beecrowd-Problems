#include <iostream>
using namespace std;

void printSpaces(int count) {
    if (count == 0)
        return;
    cout << " ";
    printSpaces(count - 1);
}


void printStars(int count) {
    if (count == 0)
        return;
    cout << "*";
    printStars(count - 1);
}

void printPyramid(int row, int N) {
    // Base case
    if (row > N)
        return;

    printSpaces(N - row);

    printStars(2 * row - 1);

    cout << endl;

    printPyramid(row + 1, N);
}

int main() {
    int N;
    cin >> N;

    printPyramid(1, N);

    return 0;
}



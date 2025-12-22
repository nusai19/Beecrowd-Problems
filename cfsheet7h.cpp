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

void printInvertedPyramid(int row, int N) {

    if (row > N)
        return;

    printSpaces(row - 1);

    printStars(2 * (N - row + 1) - 1);

    cout << endl;

    printInvertedPyramid(row + 1, N);
}

int main() {
    int N;
    cin >> N;

    printInvertedPyramid(1, N);

    return 0;
}


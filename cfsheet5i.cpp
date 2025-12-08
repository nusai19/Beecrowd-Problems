#include <iostream>
using namespace std;

void swapRows(int mat[][505], int n, int x, int y) {
    for (int j = 0; j < n; j++) {
        int temp = mat[x][j];
        mat[x][j] = mat[y][j];
        mat[y][j] = temp;
    }
}


void swapColumns(int mat[][505], int n, int x, int y) {
    for (int i = 0; i < n; i++) {
        int temp = mat[i][x];
        mat[i][x] = mat[i][y];
        mat[i][y] = temp;
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;


    X--;
    Y--;

    int A[505][505];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    swapRows(A, N, X, Y);
    swapColumns(A, N, X, Y);


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


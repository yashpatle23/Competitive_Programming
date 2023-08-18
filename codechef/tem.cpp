#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n, 0));
    matrix[0][0] = 1;

    for (int i = 1; i < n; i++) {
        matrix[i][0] = 1 - matrix[i-1][0];
    }

    for (int j = 1; j < n; j++) {
        matrix[0][j] = 1 - matrix[0][j-1];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i-1][j] == matrix[i][j-1]) {
                cout << -1 << endl;
                return 0;
            }
            matrix[i][j] = 1 - matrix[i-1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<char>> matrix(r, vector<char>(c));
    vector<bool> row(r, true);
    vector<bool> col(c, true);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];

            if (matrix[i][j] == 'S') {
                row[i] = false;
                col[j] = false;
            }
        }
    }

    int cake_count = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (row[i] || col[j]) {
                cake_count++;
            }
        }
    }

    cout << cake_count << endl;

    return 0;
}

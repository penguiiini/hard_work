#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<vector<int>> matrix;

int main() {
    cin >> n;
    cin >> m;
    int matrix1[m][2];

    for (int i = 0; i < m; i++) // ввод пар
    {
        for (int j = 0; j < 2; j++)
            cin >> matrix1[i][j];
    }

    matrix.resize(n);
    for (int i = 0; i < n; i++) // Создание матрицы смежности (заполнение ее нулями)
        matrix[i].resize(n);

    for (int i = 0; i < m; i++) // обновление матрицы смежности
    {
        for (int j = 0; j < 2; j++) {
            matrix[matrix1[i][0] - 1][matrix1[i][1] - 1] = 1;
            matrix[matrix1[i][1] - 1][matrix1[i][0] - 1] = 1;
        }
    }

    for (int i = 0; i < n; ++i)//показать матрицу смежности
    {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
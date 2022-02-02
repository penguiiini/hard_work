#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<vector<int>> matrix;

#include<iostream>
#include<stack>
#include<vector>
#define SIZE 100
using namespace std;

int n;
vector<int> E[SIZE];
bool used[SIZE];
stack<int> components;

void dfs(int v) {
    components.push(v);
    while (!components.empty()) {
        int v = components.top();
        components.pop();
        for (int i = 0; i < E[v].size(); ++i) {
            if (used[E[v][i]] == 0) {
                components.push(E[v][i]);
                used[E[v][i]] = 1;
            }
        }
    }
}

void find_components() {
    for (int i = 0; i < n; ++i)
        used[i] = false;
    for (int i = 0; i < n; ++i)
        if (!used[i]) {
            components = stack<int>(); // очистка стека
            dfs(i);
            while (!components.empty())
            {
                int w = components.top();
                std::cout << w;
                components.pop();
            }
        }
}

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
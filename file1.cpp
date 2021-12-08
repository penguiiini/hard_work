#include <iostream>
using namespace std;

void first() {
    int n;
    cin >> n;
    int array[n];
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i < n; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
    cout << array[n - 1];
}

// Вторая задача
void second() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0], max_i = 0, max_j = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j ++)
        {
            cout << arr[i][j] << " ";
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                max_i = i, max_j = j;
            }
        }
        cout << endl;
    }
    cout << max_i << " " << max_j;

}


// Третья задача
void third()
{
    int n;
    cin >> n;
    while (n > 15 || n % 2 == 0)
    {
        cout << "Введите нечетное число не больше 15!" << endl;
        cin >> n;
    }
    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = '.';
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[n / 2][i] = '*';
    }

    for (int i = 0; i < n; i++)
    {
        arr[i][n / 2] = '*';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j){
                arr[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == n - j - 1){
                arr[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}



// Четвертая задача
void fourth()
{
    int n;
    cin >> n;
    while (n > 100 || n % 2 == 0)
    {
        cout << "Введите нечетное число не больше 100!" << endl;
        cin >> n;
    }
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int x = 0; x < n; x++)
            {
                if (j == x + i || j == x - i)
                    arr[j][x] = i;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Пятая задача
void fifth()
{
    int n, m, a, b, prom;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cin >> a >> b;
    a -= 1;
    b -= 1;
    for (int i = 0; i < n; i++)
    {
        prom = arr[i][a];
        arr[i][a] = arr[i][b];
        arr[i][b] = prom;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

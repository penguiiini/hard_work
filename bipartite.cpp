#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int n, m;
   cin >> n; cin >> m; // считывание количества вершин и пар ребер
   const int SIZE = n;
   int matrix1[m][2], matrix[SIZE][SIZE]; // создание матрицы смежности

   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           cin >> matrix1[i][j];
       }
   }

   for (int i = 0; i < n; i++) // заполнение матрицы смежности нулями
   {
       for (int j = 0; j < n; j++)
       {
           matrix[i][j] = 0;
       }
   }

   for (int i = 0; i < m; i++) // заполнение матрицы смежности единицами
   {
       for (int j = 0; j < 2; j++)
       {
           matrix[matrix1[i][0] - 1][matrix1[i][1] - 1] = 1;
           matrix[matrix1[i][1] - 1][matrix1[i][0] - 1] = 1;
       }
   }

   int src = 0; // нахождение двудольного графа
   int bip[n];

   for (int i = 0; i < n; ++i)
       bip[i] = -1;

   bip[src] = 1;

   queue <int> q;
   q.push(src);

   while (!q.empty())
   {
       int f = q.front();
       q.pop();

       if (matrix[f][f] == 1)
       {
           cout << "No";
           exit(0);
       }
       for (int v = 0; v < n; ++v)
       {
           if (matrix[f][v] && bip[v] == -1)
           {
               bip[v] = 1 - bip[f];
               q.push(v);
           }

           else if (matrix[f][v] && bip[v] == bip[f])
           {
               cout << "No";
               exit(0);
           }
       }
   }

   cout << "Yes";
}

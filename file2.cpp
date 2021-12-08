#include <iostream>
#include <cmath>
using namespace std;

void distance(int x1, int x2, int y1, int y2)
{
    cout << sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2)) << endl;
}

bool IsPointInCircle(double x, double y, double xc, double yc, double r)
{
    return sqrt(pow((x - xc), 2) + pow((y - yc), 2)) <= r;
}

double power(double a, int n)
{
    if (n == 0)
        return 1;
    return a * power(a, n - 1);
}

int MinDivisor(int n)
{
    int min_d = n;
    for (int i = 2; i < n; i++)
    {
        if (min_d % i == 0)
        {
            min_d = i;
            break;
        }
    }
    return min_d;
}

bool IsPrime(int n)
{
    return (n / 10 == 0);
}

float Null()
{
    int n;
    cin >> n;
    if (n == 0)
        return 0;
    else
        return n + Null();
}
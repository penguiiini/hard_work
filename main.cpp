#include <iostream>
#include "file2.h"
#include "file1.h"
using namespace std;

int main() {
    int day;
    cout << "Введите номер того дня, откуда Вы хотите использовать функции: 1 или 2? \nВвод: ";
    cin >> day;
    if (day == 2) {
        cout << "Введите номер функции:" << endl;
        cout << "1 - distance, 2 - IsPointInCircle, 3 - power, \n4 - MinDivisor, 5 - IsPrime, 6 - Null: ";
        int n;
        cin >> n;
        if (n == 1) {
            int x1, x2, y1, y2;
            cout << "Введите x1: ";
            cin >> x1;
            cout << "Введите x2: ";
            cin >> x2;
            cout << "Введите y1: ";
            cin >> y1;
            cout << "Введите y2: ";
            cin >> y2;
            distance(x1, x2, y1, y2);
        } else if (n == 2) {
            double x, y, xc, yc, r;
            cout << "Введите x: ";
            cin >> x;
            cout << "Введите y: ";
            cin >> y;
            cout << "Введите xc: ";
            cin >> xc;
            cout << "Введите yc: ";
            cin >> yc;
            cout << "Введите r: ";
            cin >> r;
            if (IsPointInCircle(x, y, xc, yc, r))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else if (n == 3) {
            double a;
            int n;
            cout << "Введите число a: ";
            cin >> a;
            cout << "Введите число n: ";
            cin >> n;
            cout << "Результат a в степени n = " << power(a, n);
        } else if (n == 4) {
            int n;
            cout << "Введите число, наименьший делитель которого хотите найти: ";
            cin >> n;
            cout << "Наименьший делитель числа " << n << " равен " << MinDivisor(n);
        } else if (n == 5) {
            int n;
            cout << "Введите число, проверку на простоту которого хотите произвести: ";
            cin >> n;
            if (IsPrime(n))
                cout << "YES";
            else
                cout << "NO";
        } else if (n == 6) {
            cout << "Введите последовательность чисел, окончание - 0: " << endl;
            cout << "Сумма чисел следующей последовательности: " << endl;
            cout << Null();
        }
    }
    else if (day == 1) {
            cout << "Какую задачу Вы хотите рассмотреть?" << endl;
            cout << "1 - первая задача, 2 - вторая задача, 3 - третья задача, \n4 - четвертая задача, 5 - пятая задача."
                 << endl;
            string num;
            cin >> num;
            while (num != "1" && num != "2" && num != "3" && num != "4" && num != "5") {
                cout << "Введено неверное число, попробуйте еще раз..." << endl;
                cin >> num;
            }
            if (num == "1") {
                cout << "Вызывается первая функция..." << endl;
                first();
            } else if (num == "2") {
                cout << "Вызывается вторая функция..." << endl;
                second();
            } else if (num == "3") {
                cout << "Вызывается третья функция..." << endl;
                third();
            } else if (num == "4") {
                cout << "Вызывается четвертая функция..." << endl;
                fourth();
            } else if (num == "5") {
                cout << "Вызывается пятая функция..." << endl;
                fifth();
            } else {
                cout << "Введено неверное число, попробуйте еще раз" << endl;
                cin >> num;
            }
        }
    }
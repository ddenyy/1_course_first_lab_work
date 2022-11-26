// программа для вычисления тригонометрического примера
// лабораторная работа № 1 студента группы ПМИ-13БО Осипова Дениса вариант 11
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double alpha_degrees = 0.0;
    double alpha_radian = 0.0;
    setlocale(LC_ALL, "Russian");

    cout << " Введите угол альфа в градусах ";
    cin >> alpha_degrees;
    while (cin.fail()) 
    {
        cin.clear();             // Возвращаем cin в 'обычный' режим работы 
        cin.ignore(10000, '\n'); // Удаляем значения ВСЕ из входного буфера
        cout << "Неккоретный ввод. Введите угол альфа в градусах: ";
        cin >> alpha_degrees;
    }

    alpha_radian = ((M_PI * alpha_degrees) / 180.0); // перевели в радианы градусы
    double a = 1.0 - cos(2.0 * alpha_radian - M_PI) + cos(4.0 * alpha_radian - 2.0 * M_PI);
    double b = 4.0 * cos(2.0 * alpha_radian) * cos((M_PI / 6.0) + alpha_radian) * cos((M_PI / 6.0) - alpha_radian);

    cout << "Значение выражения А = " << setprecision(6) << fixed << a << '\n';   // сначала фикс потом сет
    cout << "Значение выражения B = " << setprecision(6) << fixed << b << '\n';
    cout << "Значение выражения C = " << setprecision(6) << fixed << b - a << '\n';

    return 0;
}

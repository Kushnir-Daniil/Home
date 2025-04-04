#include <iostream>
using namespace std;

int main() {
    double a, b, sum, sub, mul, div;
    cout << "Введіть два дійсних числа:" << endl;
    if (!(cin >> a)|| a == 0) {
        cerr << "Помилка число a не дорівнює 0" << endl;
        return 1;
    }
    if (!(cin >> b)|| b == 0) {
        cerr << "Помилка число b не дорівнює 0" << endl;
        return 1;
    }
    sum = a + b;
    cout << sum << endl;
    sub = a - b;
    cout << sub << endl;
    mul = a * b;
    cout << mul << endl;
    div = a / b;
    cout << div << endl;
    return 0;
}

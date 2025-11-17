#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    // Увімкнення UTF-8 у Visual Studio
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x, y;

    cout << u8"Введіть значення x: ";
    cin >> x;

    if (x < 0) {
        y = exp(-x) + exp(x);
    }
    else {
        y = log(sin(x) + 2);
    }

    cout << u8"Значення функції y = " << y << endl;

    return 0;
}

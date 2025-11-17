#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    // Увімкнення UTF-8 у Visual Studio
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;

    cout << u8"Введіть номер дня тижня (1–7): ";
    cin >> n;

    if (n < 1 || n > 7) {
        cout << u8"Помилка! Номер повинен бути від 1 до 7." << endl;
        return 0;
    }

    switch (n) {
    case 1: cout << u8"Понеділок"; break;
    case 2: cout << u8"Вівторок"; break;
    case 3: cout << u8"Середа"; break;
    case 4: cout << u8"Четвер"; break;
    case 5: cout << u8"П’ятниця"; break;
    case 6: cout << u8"Субота"; break;
    case 7: cout << u8"Неділя"; break;
    }

    cout << endl;
    return 0;
}

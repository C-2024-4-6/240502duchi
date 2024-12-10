#include "mytemperature.h"
double celsius_to_fah(double cel) {
    return cel * 9 / 5 + 32;
}
double fahrenheit_to_cels(double fah) {
    return (fah - 32) * 5 / 9;
}
#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;

int main() {
    cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius\n";
    for (double c = 40.0; c >= 31.0; c -= 1.0) {
        double f = celsius_to_fah(c);
        double c_converted = fahrenheit_to_cels(f);
        cout << fixed << setprecision(1) << c << "\t" << f << "\t\t|\t" << f << "\t\t" << c_converted << endl;
    }
    return 0;
}
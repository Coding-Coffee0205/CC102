#include <iostream>
using namespace std;

int main () {
    float temperature;
    cout << "Enter the current temperature in degrees: ";
    cin >> temperature;

    if (temperature < 32) {
        cout << "Bring a heavy jacket." << endl;
    } else if (temperature >= 32 && temperature <= 50) {
        cout << "Bring a light jacket." << endl;
    } else {
        cout << "No need to bring any jacket." << endl;
    }

    return 0;
}
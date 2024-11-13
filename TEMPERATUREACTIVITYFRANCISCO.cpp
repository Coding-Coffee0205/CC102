#include <iostream>
using namespace std;

int main () {
    float temperature;
    cout << "Enter the current temperature in degrees: ";
    cin >> temperature;

    if (response < 32) {
        cout << "Bring a heavy jacket." << endl;
    } else if (response == 32 || response <= 50) {
        cout << "Bring a light jacket." << endl;
    } else if ( response > 50) {
        cout << "No need to bring any jacket." << endl;
    }
    return 0;
}

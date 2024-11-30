#include <iostream>
using namespace std;

int main() {
    int n = 8; // Number of lines 

    // upper part of the pattern
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "#";
        }
        cout << "^" << endl;
    }

    // lower part of the pattern
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << "#";
        }
        cout << "^" << endl;
    }

    return 0;
}

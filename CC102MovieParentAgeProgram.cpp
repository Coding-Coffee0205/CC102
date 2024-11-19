#include <iostream>
#include <string>
using namespace std;

int main() {
    int age; double money; char parent;
    string toPrintShow, toPrintMoney;
    cout << "Enter your age: "; cin >> age;
    if (age < 13) {
        cout << "With Parent? (y/n): "; cin >> parent;
        toPrintShow = (parent == 'y') ? "PG & G Show." : "G Show.";
    } else if (age < 16) {
        cout << "With Parent? (y/n): "; cin >> parent;
        toPrintShow = (parent == 'y') ? "R, PG & G Show." : "PG & G Show.";
    } else {
        toPrintShow = "R, PG & G Show.";
    }
    cout << "Enter Money: "; cin >> money;
    toPrintMoney = (money < 7.5) ? "Not enough money." : (money < 10.5) ? "Can go to matinee show." : "Can go to evening & matinee show.";
    cout << toPrintShow << endl << toPrintMoney << endl;
    return 0;
}

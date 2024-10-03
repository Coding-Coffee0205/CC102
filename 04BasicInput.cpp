#include <iostream>
using namespace std;

int main(){
	string nickname, course, School;
	
	cout << "Enter your nickname:";
	cin >> nickname;
	cout << "Enter your Course and Year Level:";
	cin >> course;
	getline (cin, course);
	cout << "Enter the name of your school:";
	cin >> School;
	getline (cin, School);
	
	cout << "Wow Congrats" << nickname << endl;
    cout <<	course << " is a nice course.";
	cout << "And you are studying in" << School << "which is one of the Center of Excellence in Tertiary Education.";
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	char first_name[20], last_name[20], grade;
	int age;
	cout << "What is your first name? ";
	cin.getline(first_name, 20);
	cout << "What is your last name? ";
	cin.getline(last_name, 20);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age?";
	cin >> age;
	cout << "Name: " << last_name << "," << first_name << endl;
	switch (grade) {
	case 'A':
		cout << "Grade: B \n";
		break;
	case 'B':
		cout << "Grade: C \n";
		break;
	case 'C':
		cout << "Grade: D \n";
		break;
	default:
		break;
	}
	cout << "Age: " << age << ".\n";
	return 0;
}
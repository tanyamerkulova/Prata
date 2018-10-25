#include <iostream>
#include <iostream>
#include <cstring>

int main() {
	char first_name[1024];
	char last_name[1024];

	std::cout << "Enter your first name: ";
	std::cin >> first_name;

	std::cout << "Enter your last name: ";
	std::cin >> last_name;

	char *result = new char[strlen(first_name) + 2 + strlen(last_name) + 1];

	strcpy(result, last_name);
	strcat(result, ", ");
	strcat(result, first_name);

	std::cout << "Here's the information in a single string: " << result << std::endl;

	delete[] result;

	return 0;
}
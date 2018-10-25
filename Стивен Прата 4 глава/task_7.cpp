#include <iostream>
#include <string>

struct Pizza {
    std::string company;
	float diameter;
    float weight;
};

int main() {
    Pizza pizza;

    std::cout << "Enter company name: ";
    getline(std::cin, pizza.company);
    std::cout << "Enter diameter: ";
    std::cin >> pizza.diameter;
    std::cout << "Enter weight: ";
    std::cin >> pizza.weight;

    std::cout << pizza.company << ", " << pizza.diameter << ", " << pizza.weight << std::endl;

    return 0;
}
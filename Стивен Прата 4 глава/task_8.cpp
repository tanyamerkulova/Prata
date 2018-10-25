#include <iostream>
#include <string>

struct Pizza {
    std::string company;
	float diameter;
    float weight;
};

int main() {
    Pizza* pizza = new Pizza;

    std::cout << "Enter company name: ";
    getline(std::cin, pizza->company);
    std::cout << "Enter diameter: ";
    std::cin >> pizza->diameter;
    std::cout << "Enter weight: ";
    std::cin >> pizza->weightw;

    std::cout << pizza->diameter << ", " << pizza->company << ", " << pizza->weight << std::endl;

    delete pizza;

    return 0;
}
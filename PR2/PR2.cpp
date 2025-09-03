#include <iostream>
#include <cmath>

int main(){

	int a;

	//comit lab21

	// second commit lab21
	std::cout << "Enter an integer: ";
	std::cin >> a;

	double z1 = std::pow(((1+a+std::pow(a,2))/2*a+std::pow(a,2) + 2 - (1 - a + std::pow(a, 2)) / 2 * a - std::pow(a, 2) ), -1) * (5 - 2*std::pow(a,2));

	double z2 = (4-std::pow(a,2)) /2;

	std::cout << "z1 = " << z1 << std::endl;
	std::cout << "z2 = " << z2 << std::endl;

	return 0;
}


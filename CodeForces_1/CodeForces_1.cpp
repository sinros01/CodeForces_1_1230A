#include <iostream>

int main() {
	int a1;
	int a2;
	int a3;
	int a4;
	std::cin >> a1 >> a2 >> a3 >> a4;
	if ((a1 + a2 + a3 + a4) % 4 == 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
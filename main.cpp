#include <iostream>

float Cong(float a, float b) {
	return a + b;
}

float Tru(float a, float b) {
	return a - b;
}

float Nhan(float a, float b) {
	return a * b;
}

float Chia(float a, float b) {
	if (b == 0) {
		std::cout << "Khong the chia cho O";
	}
	else {
		return (float)a / b;
	}
}

int main() {
	int a, b;
	std::cout << "Nhap so thu nhat: ";
	std::cin >> a;
	std::cout << "Nhap so thu hai: ";
	std::cin >> b;
	std::cout << "1. Cong\n2. Tru\n3. Nhan\n4. Chia\n";
	int choice;
	std::cout << "Nhap lua chon:";
	std::cin >> choice;
	if (choice == 1) {
		std::cout << "Ket qua: " << Cong(a, b);
	}
	if (choice == 2) {
		std::cout << "Ket qua: " << Tru(a, b);
	}
	if(choice ==  3){
		std::cout << "Ket qua: " << Nhan(a, b);
	}
	if(choice == 4){
		std::cout << "Ket qua: " << Chia(a, b);

	}
}
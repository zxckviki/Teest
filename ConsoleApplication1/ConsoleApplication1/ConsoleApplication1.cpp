#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

void displayMenu() {
	cout << "\n=== КАЛЬКУЛЯТОР ===" << endl;
	cout << "1. Сложение (+)" << endl;
	cout << "2. Вычитание (-)" << endl;
	cout << "3. Умножение (*)" << endl;
	cout << "4. Деление (/)" << endl;
	cout << "5. Выход" << endl;
	cout << "Выберите операцию: ";
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int choice;

	while (true) {
		displayMenu();
		cin >> choice;

		if (std::cin.fail()) {
			std::cout << "Ошибка! Введите только числа.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (choice == 7) {
			cout << "До свидания!" << endl;
			break;
		}
	}
}
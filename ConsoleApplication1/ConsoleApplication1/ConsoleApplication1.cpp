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

double getNumber(const string& prompt) {
	double number;
	while (true) {
		cout << prompt;
		cin >> number;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Ошибка! Введите число: ";
		}
		else {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}
	return number;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice;
	double num1, num2, result;

	while (true) {
		displayMenu();
		cin >> choice;
		cout << "\n";

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (choice == 5) {
			cout << "До свидания!" << endl;
			break;
		}
		switch (choice) {
		case 1: // Сложение
			num1 = getNumber("Введите первое число: ");
			num2 = getNumber("Введите второе число: ");
			result = num1 + num2;
			cout << "Результат: " << num1 << " + " << num2 << " = " << result << endl;
			break;

		case 2: // Вычитание
			num1 = getNumber("Введите первое число: ");
			num2 = getNumber("Введите второе число: ");
			result = num1 - num2;
			cout << "Результат: " << num1 << " - " << num2 << " = " << result << endl;
			break;

		case 3: // Умножение
			num1 = getNumber("Введите первое число: ");
			num2 = getNumber("Введите второе число: ");
			result = num1 * num2;
			cout << "Результат: " << num1 << " * " << num2 << " = " << result << endl;
			break;

		case 4: // Деление
			num1 = getNumber("Введите делимое: ");
			num2 = getNumber("Введите делитель: ");
			if (num2 == 0) {
				cout << "Ошибка! Деление на ноль невозможно." << endl;
			}
			else {
				result = num1 / num2;
				cout << "Результат: " << num1 << " / " << num2 << " = " << result << endl;
			}
			break;

		default:
			cout << "Неверный выбор! Пожалуйста, выберите операцию от 1 до 5." << endl;
			break;
		}
		cout << "\nНажмите Enter для продолжения...";
		cin.get();
	}
	return 0;
}
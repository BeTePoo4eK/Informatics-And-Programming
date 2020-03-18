#include <iostream>
#include <clocale>
#include <cmath>
#include "Vector3D.h"

using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	double a;
	int answer;
	int b = 1;

	Vector3D c1;
	Vector3D c2;
	Vector3D c3;

	while (b) {
		cout << "Какое действие сделать ?" << endl << "1) Сложить " << endl << "2) Вычесть " << endl << "3) Вычислить скалярное произведение " << endl << "4) Умножить на число " << endl << "5) Сравнение векторов по длине" << endl;
		cin >> answer;

		if (answer == 4) {
			cout << endl << "Введите координаты вектора : ";
			cin >> c1;

			cout << "На какое число вы хотите умножить вектор? ";
			cin >> a;

		}
		else if (answer != 4 && abs(answer) < 6) {
			cout << endl << "Введите координаты первого вектора : ";
			cin >> c1;

			cout << "Введите координаты второго вектора : ";
			cin >> c2;
		}

		switch (answer) {
		case 1:
			c3 = c1 + c2;
			break;
		case 2:
			c3 = c1 - c2;
			break;
		case 3:
			c3 = c1 % c2;
			break;
		case 4:
			c3 = c1 * a;
			break;
		case 5:
			c3 = (c1 == c2);
			break;

		default:
			cout << "Вы ничего не выбрали, программа завершается ";
			return 0;
		}

		cout << c3;

		cout << "Вернуться к предложенным действиям?" << endl << "1)Да" << endl << "0)Выход" << endl;
		cin >> b;
		while (b != 1 && b != 0) {
			cout << "Введите 1 или 0 ";
			cin >> b;
		}
	}

	return 0;
}
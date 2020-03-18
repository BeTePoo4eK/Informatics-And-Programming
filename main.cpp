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
		cout << "����� �������� ������� ?" << endl << "1) ������� " << endl << "2) ������� " << endl << "3) ��������� ��������� ������������ " << endl << "4) �������� �� ����� " << endl << "5) ��������� �������� �� �����" << endl;
		cin >> answer;

		if (answer == 4) {
			cout << endl << "������� ���������� ������� : ";
			cin >> c1;

			cout << "�� ����� ����� �� ������ �������� ������? ";
			cin >> a;

		}
		else if (answer != 4 && abs(answer) < 6) {
			cout << endl << "������� ���������� ������� ������� : ";
			cin >> c1;

			cout << "������� ���������� ������� ������� : ";
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
			cout << "�� ������ �� �������, ��������� ����������� ";
			return 0;
		}

		cout << c3;

		cout << "��������� � ������������ ���������?" << endl << "1)��" << endl << "0)�����" << endl;
		cin >> b;
		while (b != 1 && b != 0) {
			cout << "������� 1 ��� 0 ";
			cin >> b;
		}
	}

	return 0;
}
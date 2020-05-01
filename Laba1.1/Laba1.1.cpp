
#include <iostream>
#include "Windows.h"
#include <cmath>

using namespace std;

double f1(double m) {
	double v;
	if (m < 0)
		v = sin(m) * sin(m) + cos(m) * cos(m);
	else
		v = sin(m * m);
	return v;
}

int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y, b;
	cout << "Введите первое значение ";
	cin >> x;
	cout << "Введите количество ";
	cin >> y;
	cout << "Введите шаг ";
	cin >> b;

	for (int i = 1; i <= y; i++, x += b) {
		cout << "Результат " << f1(x) << " к значению " << x;
		cout << endl;
	}

	system("pause");
	return 0;
}
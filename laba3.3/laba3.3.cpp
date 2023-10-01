#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	double a = 2.4;
	double b = 1.3;
	double x, y;
	cout << "Введите х:";
	cin >> x;
	if (x < -2) {
		y = (a * pow(cos(x), 2) - b * sin(pow(x, 2)));
	}
	if (x >= -2 && x <= 5) {
		y = (b * log(x) + pow(x, 3));
	}
	if (x > 5) {
		y = (sqrt(pow(x, 2) + a * b));
	}
	cout << "Значение у:" << y << endl;
}
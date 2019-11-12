#include <iostream>
#include <cmath>

using namespace std;

void Power3A(double a, double &b)
{
	b = pow(a, 3);
}

int main()
{
	setlocale(0, "");
	double b, a;
	cout << "Введите число A" << endl;
	cin >> a;

	Power3A(a, b);
	cout << "Итог равен " << b << endl;

	system("pause");
	return 0;
}

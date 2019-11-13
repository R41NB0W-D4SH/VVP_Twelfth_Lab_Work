#include <iostream>

using namespace std;

int Sign(double x)
{
	if (x < 0)
	{
	return -1;
	}
	if (x > 0)
	{ 
	return 1;
	}
	return 0;
}

int main()
{
	setlocale(0, "");
	double a, b;
	
	cout << "Введите числа A и B" << endl;
	cin >> a >> b;

	cout << "Итог равен " << Sign(a) + Sign(b) << endl;

	system("pause");
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int QuaterS(double x, double y)
{
	if (x > 0 && y > 0)
	{
		return 1;
	}
	if (x < 0 && y > 0)
	{
		return 2;
	}
	if (x < 0 && y < 0)
	{
		return 3;
	}
	if (x > 0 && y < 0)
	{
		return 4;
	}
}

int main()
{
	setlocale(0, "");
	int i;
	double x, y;

	for (i = 0; i < 3; i++)
	{
		cout << "Введите координаты точки" << endl;
		cin >> x >> y;

		if (x != 0 && y != 0)
		{
			cout << "Четверть: " << QuaterS(x, y) << endl;
		}
		else
		{
			cout << "Введенные координаты должны быть ненулевыми. Попробуйте еще раз, следуя условиям." << endl;
		}
	}

	system("pause");
	return 0;
}

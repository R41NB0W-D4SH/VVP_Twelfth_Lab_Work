#include <iostream>
#include <cmath>

using namespace std;

double RingS(double R1, double R2)
{
	return 3.14*pow(R1, 2) - 3.14*pow(R2, 2);
}

int main()
{
	setlocale(0, "");
	int i;
	double R1, R2;

	for (i = 0; i < 3; i++)
	{
		cout << "Введите больший и малый радиусы" << endl;
		cin >> R1 >> R2;

		if (R1 > R2)
		{
			if (R1 >= 0 && R2 >= 0)
			{
				cout << "Площадь круга равна " << RingS(R1, R2) << endl << endl;
			}
			else
			{
				cout << "Радиусы должны быть больше или равны нулю." << endl << endl;
			}
		}
		else
		{
			cout << "Перый радиусы должен быть больше второго. Попробуйте еще раз, следуя условиям." << endl << endl;
		}
	}

	system("pause");
	return 0;
}

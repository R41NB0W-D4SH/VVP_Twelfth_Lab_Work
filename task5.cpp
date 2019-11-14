#include <iostream>

using namespace std;

double Fact2(int n)
{
	int i = 2 - n % 2;
	double sum = 1.0;
	for (; i <= n; i = i + 2)
	{
		sum = sum * i;
	}
	return sum;
}

int main()
{
	setlocale(0, "");
	int n;
	cout << "Введите число N" << endl;
	cin >> n;

	cout << "Факториал равен " << Fact2(n) << endl;

	system("pause");
	return 0;
}

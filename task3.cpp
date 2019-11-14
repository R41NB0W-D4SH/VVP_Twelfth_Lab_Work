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

	for(i = 0; i < 3; i++)
	{
		cout << "Vvedite bolshiy i maliy radiusy" << endl;
		cin >> R1 >> R2;
	
		if (R1 > R2)
		{
			if (R1 >= 0 && R2 >= 0)
			{
				cout << "ploshad kruga ravna " << RingS(R1, R2) << endl << endl;
			}
			else 
			{
				cout << "Radiusy dojni bit bolshe ili ravny nylu." << endl << endl;
			}
		}
		else
		{
			cout << "Perviy radius doljen bit bolshe vtorogo. Poprobyite esche raz, sledya ysloviam." << endl << endl;
		}
	}

	system("pause");
	return 0;
}

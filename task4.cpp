#include <iostream>
#include <string>

using namespace std;

int QuaterS( double x, double y)
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
	
	for(i = 0; i < 3; i++)
	{
		cout <<"Vvedite coordinati to4ki" << endl;
		cin >> x >> y;
		
		if (x != 0 && y != 0)
		{
			cout <<"4etvert: " << QuaterS(x, y) << endl;
		}
		else
		{
			cout <<"Vvedennye koordinaty doljni bit nenylevymi. Poprobyite esche raz, sledya ysloviam. " << endl;
		}
	}
	
	system("pause");
	return 0;
}

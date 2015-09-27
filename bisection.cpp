#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;


float polynomial(float x)
{
	float fx1;
	fx1 = pow(x, 3) + pow(x, 2) - (3 * x) - 3;
	return (fx1);
}

void main()
{
	float x1, x2, x3;

	float a;
	float b;
	float m;
	int count = 0;


	cout << "Enter x1 = ";
	cin >> x1;
	cout << "Enter x2 = ";
	cin >> x2;
	cout << "Enter x3 = ";
	cin >> x3;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;


	if (polynomial(a) == 0)
	{
		exit(a);
	}

	if (polynomial(b) == 0)
	{
		exit(b);
	}

	while (abs(a - b) >= 0.000001)
	{
		
		m = (a + b) / 2;
		if (polynomial(a) == 0)
		{
			exit(a);
			cout << "exiting a ";
			cout << a;
		}

		if (polynomial(b) == 0)
		{
			exit(b);
			cout << b;
			cout << "exiting b";
		}
		if (polynomial(m) == 0)
		{
			exit(m);
			cout << "exiting m";
			cout << m;

		}

		if (polynomial(m)*polynomial(a) < 0)
		{
			b = m;

		}
		else

		{
			if (polynomial(m)*polynomial(b) < 0)
			{
				a = m;

			}
		}

		count++;

	}


	cout << "The root is " << m;
	cout << endl;
	cout << "Took " << count << "iterations";
	cout << endl;

}


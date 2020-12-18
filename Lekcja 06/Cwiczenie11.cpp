//Cwiczenie 11

#include <iostream>

using namespace std;

int main()
{
	int potegi[8];
	for (int i = 0; i < 8; i++)
	{
		if (i == 0)potegi[i] = 2;
		else potegi[i] = potegi[i - 1] * 2;
	}
	int j = 0;
	do
	{	
		cout << potegi[j] << ' ';
		j++;
	} while (j < 8);
	
	return 0;
}
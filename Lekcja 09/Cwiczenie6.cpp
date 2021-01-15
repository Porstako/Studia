/Cwiczenie 6

#include <iostream>

using namespace std;

double potega(double x, int y)
{
	double wynik = x;
	if (x == 0) return 0;
	if (y == 0) return 1;
	if (y > 0) for (int i = 1; i < y; i++) wynik *= x;
	if (y < 0) 
	{
		wynik = (x / x) / x;
		for (int i = -1; i > y; i--) wynik /= x;
	}

	return wynik;
}

int main()
{
	double x;
	int y;
	cin >> x >> y;
	cout << potega(x, y) << endl;
	return 0;
}
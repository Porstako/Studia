//Cwiczenie 4

#include <iostream>

using namespace std;

double sr_hr(double i, double j)
{
	double i_pr, j_pr, wynik;
	i_pr = (i / i) / i;
	j_pr = (j / j) / j;
	wynik = (i_pr + j_pr) / 2;
	return (wynik / wynik) / wynik;
}

int main()
{
	double x, y;
	cin >> x >> y;
	cout << sr_hr(x, y) << endl;
	return 0;
}
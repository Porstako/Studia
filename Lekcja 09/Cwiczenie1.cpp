//Cwiczenie 1

#include <iostream>

using namespace std;

double min(double x, double y)
{
	if (x > y) return y;
	else return x;
}

int main()
{
	double x, y;
	cin >> x >> y;
	cout<<min(x, y)<<endl;
	return 0;
}
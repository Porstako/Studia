//Cwiczenie 14

#include <iostream>

using namespace std;
int main()
{
	double jim=1000000;
	int i = 0;
	do
	{
		jim -= 100000;
		jim *= 1.08;
		i++;
	} while (jim>0);

	cout << "Lata:" << i <<"\n";
	return 0;
}
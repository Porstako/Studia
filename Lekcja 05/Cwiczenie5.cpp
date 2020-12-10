//Cwiczenie 5

#include <iostream>

using namespace std;

int main()
{
	int licznik=0, suma=0, x;
	cin >> x;
	while (licznik++ < x) suma += licznik*licznik;
	cout <<"suma = "<< suma;
	return 0;
}
//Cwiczenie 9

#include <iostream>

using namespace std;

int main()
{
	int tab[8];
	for (int i = 0; i < 8; i++) cin >> tab[i];
	for (int i = 7; i >= 0; i--) cout << tab[i]<< " ";
	return 0;
}
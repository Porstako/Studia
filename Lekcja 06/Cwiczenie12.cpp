//Cwiczenie 12

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string tekst;
	getline(cin, tekst);
	for (int i = tekst.length() - 1; i >= 0; i--) cout << tekst[i];
	return 0;
}
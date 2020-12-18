//Cwiczenie 6

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string slowo;
	cin >> slowo;
	for (int i = 0; i < slowo.length(); i++) cout << slowo[slowo.length() - i - 1];
	return 0;
}
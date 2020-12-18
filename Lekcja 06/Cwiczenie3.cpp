//Cwiczenie 3

#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 6; i++)
	{
		char litera = 70;
		for (int j = 0; j <= i; j++)
		{
			cout << litera;
			litera--;
		}
		cout << "\n";
	}
	return 0;
}
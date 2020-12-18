//Cwiczenie 4

#include <iostream>

using namespace std;

int main()
{
	char litera, literaPrime;
	cin >> litera;
	literaPrime = litera;
	if (litera > 90 && litera < 65) return 1;
	else
	{
		for (int i = 0; i < litera-64; i++)
		{
			literaPrime = litera;
			for (int x = 0; x < litera-(65+i); x++)
			{
				cout << ' ';
			}
			for (int y = litera - 65; y >= (litera-65)-i ; y--)
			{
				literaPrime = litera-y;
				cout << literaPrime;
			}
			for (int y = litera - 66; y >= (litera - 65) - i; y--)
			{
				literaPrime--;
				cout << literaPrime;
			}
			for (int x = 0; x < litera - (65 + i); x++)
			{
				cout << ' ';
			}
			cout << "\n";
		}
	}
	
	return 0;
}
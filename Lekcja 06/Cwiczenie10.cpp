//Cwiczenie 10

#include <iostream>

using namespace std;

void ciag1(int x)
{
	float wynik=0;
	for (float i = 1; i <= x; i++) wynik += 1 / i;
	cout << wynik<<"\n";
}
void ciag2(int x)
{
	float wynik=0;
	for (float i = 1; i <= x; i++)
	{
		wynik += 1 / i;
		i++;
		if (i <= x)wynik -= 1 / i;
	}

	cout << wynik << "\n";
}


int main()
{
	int x;
	cin >> x;
	ciag1(x);
	ciag2(x);
	
	return 0;
}
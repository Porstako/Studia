//Cwiczenie 3

#include <iostream>

using namespace std;

void pole_zn(char ch, int i, int j)
{
	for (int a = 0; a < j; a++)
	{
		for (int a = 0; a < i; a++) printf("%c", ch);
		cout << "\n";
	}
}

int main()
{
	int x, y;
	char ch;
	cin >> ch >> x >> y;
	pole_zn(ch,x, y);
	return 0;
}
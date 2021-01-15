//Cwiczenie 2

#include <iostream>

using namespace std;

void rzad_zn(char ch, int i, int j)
{
	for (int a = 0; a < i; a++) printf(" ");
	for (int a = i; a <= j; a++) printf("%c", ch);
}

int main()
{
	int x, y;
	char ch;
	cin >> ch >> x >> y;
	rzad_zn(ch,x, y);
	return 0;
}
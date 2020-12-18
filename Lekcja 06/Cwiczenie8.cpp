//Cwiczenie 8

#include <iostream>

using namespace std;

void cw8(float x, float y)
{
	cout << (x - y) / (x * y) << "\n";
}

int main()
{
	float x = 0, y = 0;
	while (cin >> x >> y) cw8(x,y);
	return 0;
}